#include "lists.h"

/**
 * insert_dnodeint_at_index -  inserts a new node at a given position
 *
 * @h: a dlistint_t linked list
 * @idx: the index of the list where the new node should be added
 * @n: value of a noude
 *
 * Return: the address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *dl = *h, *l;

	l = malloc(sizeof(dlistint_t));
	if (l == NULL)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));
	for (; idx != 1; idx--)
	{
		dl = dl->next;
		if (dl == NULL)
			return (NULL);
	}
	if (dl->next == NULL)
		return (add_dnodeint_end(h, n));
	l->n = n;
	l->prev = dl;
	l->next = dl->next;
	dl->next->prev = l;
	dl->next = l;
	return (l);
}
