#include "lists.h"
/**
 * get_nodeint_at_index - a function that returns the nth node
 * @head: the head of the node
 * @index: unsigned int
 * Return: 0
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head != NULL)
	{
		if (count == index)
			return (head);

		head = head->next;
		count++;
	}

	return (NULL);
}
