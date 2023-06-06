#include "lists.h"

/**
 * add_nodeint_end - will add a new node at the end of list (listint_t).
 * @head: pointer to the address of head of list (listint_t)
 * @n: integer for new node to contain
 *
 * Return: If funtion fails - NULL.
 * Otherwise - address of new element.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *last;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
		*head = new;

	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = new;
	}

	return (*head);
}
