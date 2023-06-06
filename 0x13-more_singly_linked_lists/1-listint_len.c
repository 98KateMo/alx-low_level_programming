#include "lists.h"
#include <stdio.h>

/**
 * listint_len - will return number of elements
 * in a linked list (listint_t)
 * @h: pointer to head of the list (listint_t).
 *
 * Return: number of the elements in the list (listint_t)
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
