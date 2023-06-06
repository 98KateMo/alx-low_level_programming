#include "lists.h"

/**
 * free_listint2 - will free a list (listint_t)
 * @head: pointer to address of head of list (listint_t)
 *
 * Description: the head is set to NULL
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;

	while (*head)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}

	head = NULL;
}
