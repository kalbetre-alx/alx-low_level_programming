#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_list - prints all elements of a list
 * @h: the list
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;
	list_t *head;

	if (h != NULL)
	{
		head = malloc(sizeof(list_t));
		if (head == NULL)
			return (-1);

		head->len = h->len;
		head->str = h->str;
		head->next = h->next;

		while (head != NULL)
		{
			if (head->str == NULL)
				printf("[0] (nil)\n");
			else
				printf("[%d] %s\n", head->len, head->str);
			head = head->next;
			count++;
		}
		free(head);
	}
	return (count);
}
