#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * sum_listint - sums the elements of the list
 * @head: pointer to the list
 *
 * Return: the sum or 0 if list is empty
 */
int sum_listint(listint_t *head)
{
	size_t sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
