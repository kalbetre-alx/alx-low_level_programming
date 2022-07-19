#include "lists.h"

/**
 * reverse_listint - reverses the elements of a list
 * @head: pointer to the head of the list
 *
 * Return: pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp_1, *temp_2;

	temp_1 = *head;
	if (temp_1 == NULL)
		return (*head);

	temp_2 = temp_1->next;

	while (temp_2 != NULL)
	{
		temp_1->next = temp_2->next;
		temp_2->next = *head;
		*head = temp_2;
		temp_2 = temp_1->next;
	}
	return (*head);
}
