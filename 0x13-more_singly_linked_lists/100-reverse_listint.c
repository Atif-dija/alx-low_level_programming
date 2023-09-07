#include "lists.h"

/**
 * reverse_listint -  reverses a listint_t linked list
 *
 *@head: a linked list
 *
 *Return: a pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *l = *head, *rev_l;

	if (head == NULL)
		return (NULL);
	*head = NULL;

	while (l != NULL)
	{
		rev_l = l->next;
		l->next = *head;
		*head = l;
		l = rev_l;
	}
	return (*head);
}
