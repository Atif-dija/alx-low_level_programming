#include "lists.h"

/**
 * free_listint_safe - frees a linked list
 *
 * @h: the linked list
 *
 * Return: size of the list that was free’d
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *l;
	size_t len = 0;
	int dif;

	if (h == NULL)
		return (0);

	while (*h)
	{
		dif = *h - (*h)->next;
		if (dif > 0)
		{
			l = (*h)->next;
			free(*h);
			*h = l;
			len++;
		}
		else
		{
			free(*h);
			*h = NULL;
			len++;
			break;
		}
	}
	*h = NULL;
	return (len);
}
