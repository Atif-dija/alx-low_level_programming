#include "lists.h"

/**
 * print_list -  prints all the elements of a list_t list
 *
 * @h: a list
 *
 * Return: the number of nodes or NULL
 */

size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] %s\n", "(nil)");
		else
			printf("[%u] %s\n", h->len, h->str);
		nodes++;
		h = h->next;
	}
	return (nodes);
}
