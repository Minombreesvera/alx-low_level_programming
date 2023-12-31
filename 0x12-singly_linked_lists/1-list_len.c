#include <stdlib.h>
#include "lists.h"
/**
 * list_len - returns the number of elements
 * @h: pointer to the list
 * Return: the number of elements in a linked list
 */
size_t list_len(const list_t *h)
{
	size_t m = 0;

	while (h)
	{
		m++;
		h = h->next;
	}
	return (m);
}
