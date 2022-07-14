#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * free_list - frees the memory allocated for list
 * @head: pointer to the head of the list
 *
 * Return: Nothing
 */
void free_list(list_t *head)
{
	if (head != NULL)
	{
		if (head->next != NULL)
			free_list(head->next);

		free(head->str);
		free(head);
	}
}
