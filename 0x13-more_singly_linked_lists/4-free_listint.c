#include "lists.h"

/**
 * free_listint - will free a  list (listint_t).
 * @head: pointer to the head of the list (listint_t) to be freed.
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
