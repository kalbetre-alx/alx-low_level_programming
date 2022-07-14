#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - adds an element to a list
 * @head: pointer to the head of a list
 * @str: data to be added
 *
 * Return: a pointer to the list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *node;

	node = malloc(sizeof(list_t));
	if (head == NULL)
		return (NULL);

	node->len = strlen(str);
	node->str = malloc(sizeof(char) * node->len);
	strcpy(node->str, str);
	node->next = *head;
	*head = node;

	return (*head);
}
