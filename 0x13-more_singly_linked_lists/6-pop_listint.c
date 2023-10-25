#include "lists.h"

/**
 * pop_listint - a function that deletes the head node of the list
 * @head: the head of the node
 * Return: 0
 */
int pop_listint(listint_t **head)
{
	int data = (*head)->n;
	listint_t *temp;

	if (*head == NULL)
		return (0);

	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (data);
}
