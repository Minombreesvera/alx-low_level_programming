#include "lists.h"
/**
 * pop_listint - a function that deletes the head node of the list
 * @head: the head of the node
 * Return: 0
 */
int pop_listint(listint_t **head)
{
	if (*head == NULL)
		return (0);

	int data = (*head)->n;

	listint_t *temp = *head;
	*head = (*head)->next;
	free(temp);
	return (data);
}
