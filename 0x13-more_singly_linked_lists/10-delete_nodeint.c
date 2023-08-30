#include "lists.h"

/**
 * delete_nodeint_at_index -  deletes the node at index index of a listint_t
 *
 * @head: linked list
 * @index: the index of the node that should be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node = *head, *l = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(node);
		return (1);
	}

	while (i != index)
	{
		if (node == NULL || node->next == NULL)
			return (-1);
		node = node->next;
		i++;
	}

	l = node->next;
	node->next = l->next;
	free(l);
	return (1);
}
