#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_nodeint_at_index - gets the node at index
 * @head: pointer to the head of the list
 * @index: index to get the node
 *
 * Return: the node at the specified index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t i = 0;
	listint_t *temp;

	if (head != NULL)
	{
		temp = head;
		while (head != NULL && i < index)
		{
			temp = temp->next;
			i++;
		}

		if (head == NULL)
			return (NULL);

		return (temp);
	}
	return (NULL);
}
