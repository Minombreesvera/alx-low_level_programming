#include <lists_h>
/**
 * print_listint - a function that prints all th eelements of a list
 * @h: a pointer
 * Return: 0
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return count;
}
