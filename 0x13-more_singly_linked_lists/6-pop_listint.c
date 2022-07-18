#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head of a list
 * @head: pointer to the head of a list
 *
 * Return: the data of the head of the node or 0
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int value;

	if (head == NULL || *head == NULL)
		return (0);

	temp = *head;
	value = temp->n;
	*head = temp->next;
	free(temp);
	return (value);
}
