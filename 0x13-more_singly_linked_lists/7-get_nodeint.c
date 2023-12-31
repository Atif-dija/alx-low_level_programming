#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 *
 * @head: a list
 * @index: index of a node
 *
 * Return: node or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node = head;
	unsigned int i = 0;

	if (node)
	{
		while (node && i != index)
		{
			i++;
			node = node->next;
		}
		return (node);
	}
	return (NULL);
}
