#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 *
 * @head: the linked list
 *
 * Return: the address of the node where the loop starts, or NULL
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *l, p;

	if (head == NULL)
		return (NULL);

	for (l = head->next; l != NULL; l = l->next)
	{
		if (l == l->next)
			return (l);
		for (p = head; p != l; p = p->next)
		{
			if (p == l->next)
				return (l->next);
		}
	}

	return (NULL);
}
