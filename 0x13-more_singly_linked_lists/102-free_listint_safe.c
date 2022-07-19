#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeaddr_2 - adds an element to a list
 * @head: pointer to the head of a list
 * @addr: data to be added
 *
 * Return: a pointer to the list or NULL
 */
list_addr *add_nodeaddr_2(list_addr **head, const size_t addr)
{
	list_addr *node, *temp = *head;

	while (temp != NULL)
	{
		if (temp->addr == addr)
			return (NULL);
		temp = temp->next;
	}

	node = malloc(sizeof(list_addr));
	if (node == NULL)
		exit(98);

	node->addr = addr;

	if (head == NULL)
	{
		node->next = NULL;
		return (node);
	}

	node->next = *head;
	*head = node;
	return (node);
}

/**
 * free_listaddr_2 - frees the memory allocated for list
 * @head: pointer to the head of the list
 *
 * Return: Nothing
 */
void free_listaddr_2(list_addr *head)
{
	if (head != NULL)
	{
		if (head->next != NULL)
			free_listaddr_2(head->next);

		free(head);
	}
}

/**
 * free_listint_safe - safely frees memory allocated to a list
 * @h: pointer to the list
 *
 * Return: the number of nodes
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *temp = *h, *next;
	list_addr *freed = NULL;

	while (temp != NULL)
	{
		if (add_nodeaddr_2(&freed, (size_t)temp) == NULL)
			break;
		next = temp->next;
		free(temp);
		temp = next;
		count++;
	}
	free_listaddr_2(freed);
	*h = NULL;
	return (count);
}
