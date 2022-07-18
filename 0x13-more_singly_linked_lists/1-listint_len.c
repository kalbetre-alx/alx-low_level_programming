#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * listint_len - returns the size of the list
 * @h: pointer to the list
 *
 * Return: the number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;
	listint_t *head;

	if (h != NULL)
	{
		head = malloc(sizeof(listint_t));
		if (head == NULL)
			return (-1);

		head->next = h->next;

		while (head != NULL)
		{
			head = head->next;
			count++;
		}
		free(head);
	}
	return (count);
}
