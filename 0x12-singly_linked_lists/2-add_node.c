#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - adds an element to a list
 * @head: pointer to the head of a list
 * @str: data to be added
 *
 * Return: a pointer to the list or NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *node;

	if (str == NULL)
		return (NULL);

	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);

	node->str = strdup(str);
	if (node->str == NULL)
	{
		free(node);
		return (NULL);
	}
	node->len = strlen(str);

	if (head == NULL)
	{
		node->next = NULL;
		return (node);
	}

	node->next = *head;
	*head = node;
	return (node);
}
