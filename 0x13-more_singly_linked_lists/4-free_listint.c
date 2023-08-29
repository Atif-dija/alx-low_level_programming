#include "lists.h"

/**
 * free_listint - frees a listint_t list
 *
 * @head: a list
 */

void free_listint(listint_t *head)
{
	listint_t *l = head, *ls;

	while (l != NULL)
	{
		ls = l->next;
		free(l);
		l = ls;
	}
}
