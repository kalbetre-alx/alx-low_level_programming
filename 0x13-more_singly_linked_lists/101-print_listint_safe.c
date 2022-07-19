#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * add_nodeaddr - adds an element to a list
 * @head: pointer to the head of a list
 * @addr: data to be added
 *
 * Return: a pointer to the list or NULL
 */
list_addr *add_nodeaddr(list_addr **head, const size_t addr)
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
		return (NULL);

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
 * free_listaddr - frees the memory allocated for list
 * @head: pointer to the head of the list
 *
 * Return: Nothing
 */
void free_listaddr(list_addr *head)
{
	if (head != NULL)
	{
		if (head->next != NULL)
			free_listaddr(head->next);

		free(head);
	}
}

/**
 * print_listint_safe - safely prints all elements of a list
 * @head: pointer to the head of the list
 *
 * Return: the number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *temp = head;
	list_addr *printed = NULL;

	if (temp == NULL)
		exit(98);

	while (temp != NULL)
	{
		printf("[%p] %d\n", (void *)temp, temp->n);
		temp = temp->next;
		if (add_nodeaddr(&printed, (size_t)temp) == NULL)
		{
			printf("-> [%p] %d\n", (void *)temp, temp->n);
			free_listaddr(printed);
			exit(98);
		}
		count++;
	}
	free_listaddr(printed);
	return (count);
}
