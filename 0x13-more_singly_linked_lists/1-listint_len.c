#include "lists.h"
/**
 * listint_len - a function that returns the elements in a linked list
 * @h: returns the number of nodes
 * Return: 0
 */
size_t listint_len(const listint_t *h)
{
	size_t value = 0;

	while (h)
	{
		h = h->next;
		value++;
	}

	return (value);
}
