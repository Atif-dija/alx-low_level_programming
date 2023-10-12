#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a dlistint_t ist
 *
 * @head: head of a dlistint_t linked list
 * @index: the index of the node that should be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *l = *head;

	if (*head == NULL)
		return (-1);
	for (; index != 0; index--)
	{
		if (l == NULL)
			return (-1);
		l = l->next;
	}
	if (l == *head)
	{
		*head = l->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}
	else
	{
		l->prev->next = l->next;
		if (l->next != NULL)
			l->next->prev = l->prev;
	}
	free(l);
	return (1);
}
