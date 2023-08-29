#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 *
 * @head: a list
 *
 * @n: integer
 *
 * Return: the address of the new element, or NULL
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listnt_t  *l;

	l = malloc(sizeof(listint_t));
	if (l != NULL)
	{
		l->n = n;
		l->next = *head;
		*head = l;
		return (l);
	}
	return (NULL);
}
