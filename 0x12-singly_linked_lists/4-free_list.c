#include "lists.h"

/**
 * free_list - frees a list_t list
 *
 * @head: a list
 */

void free_list(list_t *head)
{
	list_t *l = head;

	while (l != NULL)
	{
		head = head->next;
		free(l->str);
		free(l);
	}
}

