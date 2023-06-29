#include "lists.h"

/**
 * delete_nodeint_at_index - will delete node by given index of linked list.
 * @index - index of node to be deleted(indices begin at 0).
 * @head - pointer to head of list
 * Return: 1 - if function succeeds,
 * -1 - if function fails
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *tmp, *copy = *head;

unsigned int node;


if (copy == NULL)
return (-1);


if (index == 0)
{
*head = (*head)->next;
free(copy);
return (1);
}

for (node = 0; node < (index - 1); node++)
{
if (copy->next == NULL)
return (-1);

copy = copy->next;
}

tmp = copy->next;
copy->next = tmp->next;
free(tmp);
return (1);
}
