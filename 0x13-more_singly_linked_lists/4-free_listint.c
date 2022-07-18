#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint - frees the memory allocated for list
 * @head: pointer to the head of the list
 *
 * Return: Nothing
 */
void free_listint(listint_t *head)
{
	if (head != NULL)
	{
		if (head->next != NULL)
			free_listint(head->next);

		free(head);
	}
}
