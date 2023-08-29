#include "lists.h"

/**
 * listint_len - eturns the number of elements in a linked listint_t list
 *
 * @h: a list
 *
 * Return: n_elements
 */

size_t listint_len(const listint_t *h)
{
	size_t n_elements = 0;

	while (h != NULL)
	{
		n_elements++;
		h = h->next;
	}
	return (n_elements);
}
