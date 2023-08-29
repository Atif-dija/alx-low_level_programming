#include "lists.h"

/**
 * print_listint -  prints all the elements of a list_t list
 *
 * @h: a list
 *
 * Return: the number of nodes or NULL
 */

size_t print_listint(const listint_t *h)
{
		size_t nodes = 0;

		while (h != NULL)
		{
			printf("%d\n", h->n);
			nodes++;
			h = h->next;
		}
		return (nodes);
}
