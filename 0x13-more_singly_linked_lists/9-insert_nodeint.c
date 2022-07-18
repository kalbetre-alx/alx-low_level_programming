#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - adds an element to a list
 * @head: pointer to the head of a list
 * @n: data to be added
 *
 * Return: a pointer to the list or NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);

	node->n = n;

	if (head == NULL)
	{
		node->next = NULL;
		return (node);
	}

	node->next = *head;
	*head = node;
	return (node);
}

/**
 * get_nodeint_at_index - gets the node at index
 * @head: pointer to the head of the list
 * @index: index to get the node
 *
 * Return: the node at the specified index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp;

	if (head != NULL)
	{
		temp = head;
		while (i < index)
		{
			temp = temp->next;
			if (temp == NULL)
				return (NULL);
			i++;
		}

		return (temp);
	}
	return (NULL);
}

/**
 * insert_nodeint_at_index - inserts a give node at the specified index
 * @head: pointer to the head of the list 
 * @idx: index to insert the node
 * @n: value of the node to be inserted
 * 
 * Return: address of the new node 
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node;
	listint_t *temp;

	if (head == NULL)
		return (NULL);
	
	if (idx == 0)
		temp = add_nodeint(head, n);
	else
	{
		node = get_nodeint_at_index(*head, idx - 1);
		if (node == NULL)
			return (NULL);
		
		temp = malloc(sizeof(listint_t));
		if (temp == NULL)
			return (NULL);
		temp->n = n;
		
		temp->next = node->next;
		node->next = temp;
	}
	
	return (temp);
}
