#include "lists.h"
#include <stdlib.h>

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: pointer to the list
 *
 * Return: the address of the node where the loop starts
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *node = head, *prev = head;

	while (node != NULL && node->next != NULL)
	{
		node = node->next;
		prev = head;

		while (prev != NULL && prev != node && node != NULL)
		{
			if (node->next == prev)
				return (node->next);
			prev = prev->next;
		}
	}
	return (NULL);
}
