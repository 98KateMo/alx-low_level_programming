#include "lists.h"
#include <stdio.h>

/**
 * print_listint - will print all the elements of a list (listint_t)
 * @h: pointer to the head of the list_t list
 *
 * Return: number of nodes in the list (list_t)
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (nodes);
}
