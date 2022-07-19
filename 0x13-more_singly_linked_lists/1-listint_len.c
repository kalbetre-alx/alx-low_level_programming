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
	const listint_t *head = h;

	if (h == NULL)
		return (count);

	while (head != NULL)
	{
		head = head->next;
		count++;
	}

	return (count);
}
