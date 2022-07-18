#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_nodeint - adds an element to a list
 * @head: pointer to the head of a list
 * @n: data to be added
 *
 * Return: a pointer to the list or NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
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
