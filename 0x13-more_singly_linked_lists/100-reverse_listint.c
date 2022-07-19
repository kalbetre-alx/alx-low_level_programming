#include "lists.h"

/**
 * add_nodeint_front - adds an element to a list
 * @head: pointer to the head of a list
 * @n: data to be added
 *
 * Return: a pointer to the list or NULL
 */
listint_t *add_nodeint_front(listint_t **head, const int n)
{
	listint_t *node;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);

	node->n = n;

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
 * reverse_listint - reverses the elements of a list
 * @head: pointer to the head of the list
 *
 * Return: pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *rev_list = NULL, *temp = *head;

	while (temp != NULL)
	{
		add_nodeint_front(&rev_list, temp->n);
		temp = temp->next;
	}

	free_listint2(head);
	*head = rev_list;
	return (*head);
}
