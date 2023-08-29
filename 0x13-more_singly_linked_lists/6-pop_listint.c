#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list,
 * and returns the head node’s data (n)
 *
 * @head: a list
 *
 * Return: n or 0
 */

int pop_listint(listint_t **head)
{
	listint_t *l;
	int n;

	if (head == NULL)
		return (0);

	n = (*head)->n;
	l = (*head)->next;
	free(*head);
	*head = l;
	return (n);


}

