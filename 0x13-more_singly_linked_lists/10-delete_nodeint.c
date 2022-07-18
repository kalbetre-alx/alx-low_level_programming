#include "lists.h"

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
 * delete_nodeint_at_index - deletes a give node at the specified index
 * @head: pointer to the head of the list
 * @index: index to insert the node
 *
 * Return: 1 if it succeeded or -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node;
	listint_t *temp;

	if (head == NULL)
		return (-1);

	if (index == 0)
	{
		temp = *head;
		if (temp == NULL)
			return (-1);
		*head = temp->next;
	}
	else
	{
		node = get_nodeint_at_index(*head, index - 1);
		if (node == NULL || node->next == NULL)
			return (-1);

		temp = node->next;
		node->next = temp->next;
	}
	free(temp);
	return (1);
}
