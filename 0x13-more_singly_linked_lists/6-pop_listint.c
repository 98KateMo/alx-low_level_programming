#include "lists.h"

/**
 * pop_listint - will delete head node of list (listint_t)
 * @head: pointer to the address of the head of the list (listint_t)
 *
 * Return: If linked list is empty - 0.
 * Otherwise - head node data
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int ret;

	if (*head == NULL)
		return (0);

	tmp = *head;
	ret = (*head)->n;
	*head = (*head)->next;

	free(tmp);

	return (ret);
}
