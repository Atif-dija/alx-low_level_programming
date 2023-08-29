#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 *
 * @head: a list
 */

void free_listint2(listint_t **head)
{
	listint_t *l;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		l = (*head)->next;
		free(*head);
		*head = l;
	}

	*head = NULL;
}
