#include "lists.h"
/**
 * add_nodeint - a function that adds a new a node
 * @head: pointer to the first node
 * @n: data to be inserted
 * Return: 0 / NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
	return (NULL);
	}

	new_node->n = n;
	new_node->next = *head;

	*head = new_node;

	return (new_node);
}
