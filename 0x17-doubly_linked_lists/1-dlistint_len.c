#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list
 *
 * @h: a dlistint_t list
 *
 * Return: the number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t n_elm = 0;

	while (h)
	{
		h = h->next;
		n_elm++;
	}
	return (n_elm);
}

