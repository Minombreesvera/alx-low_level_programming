#include "lists.h"
/**
 * free_listint - a function that frees a listint_t list.
 * @head: the start of a new node
 */
void free_listint(listint_t *head)
{
	listint_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
