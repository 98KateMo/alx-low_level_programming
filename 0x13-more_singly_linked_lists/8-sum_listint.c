#include "lists.h"

/**
 * sum_listint -  determine sum of all of the data (n) of a list (listint_t)
 * @head: pointer to the head of list (listin_t)
 *
 * Return: If list is empty - 0.
 * Otherwise - sum of all the data
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
