#include "lists.h"
/**
 * sum_listint - a function that returns the sum of all the data (n)
 * @head: head of a node
 * Return: 0
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
