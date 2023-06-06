#include "lists.h"

/**
 * add_nodeint - will add a new node at the start of a list (listint_t)
 * @head: pointer to the address of the head of list (listint_t)
 * @n: integer for new node to contain
 *
 * Return: function fails - NULL.
 * Otherwise - address of new element.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}
