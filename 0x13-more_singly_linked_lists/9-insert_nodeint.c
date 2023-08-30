#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 *
 * @head: linked lists
 * @idx: he index of the list where the new node should be added
 * @n: integer
 *
 * Return: the address of the new node, or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *l = *head, *node;
	unsigned int i;

	node = malloc(sizeof(listint_t));

	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = NULL;

	if (idx == 0)
	{
		node->next = *head;
		*head = node;
		return (node);
	}

	for (i = 0; i < idx && l != NULL; i++)
	{
		if (i == idx - 1)
		{
			node->next = l->next;
			l->next = node;
			return (node);
		}
		l = l->next;
	}
	return (NULL);
}


