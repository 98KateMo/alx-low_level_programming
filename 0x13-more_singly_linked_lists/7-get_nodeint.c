#include "lists.h"

/**
 * get_nodeint_at_index - will locate a given node of list (listint_t).
 * @head: ponter to head of list (listint_t).
 * @index: index of node to locate, indice will start from 0.
 *
 * Return: If node is non-existent - NULL.
 * Otherwise - located node.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node;

	for (node = 0; node < index; node++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}

	return (head);
}
