#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - adds a node at the end
 * @head: pointer to the head of a list
 * @n: data to be added
 *
 * Return: address of the new element or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node;
	listint_t *temp;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = NULL;

	if (*head != NULL)
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = node;
	}
	else
		*head = node;

	return (node);
}
