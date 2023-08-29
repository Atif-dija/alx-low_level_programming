#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 *
 * @head: a list
 * @n: integer
 *
 * Return: the address of the new element, or NULL
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t  *l, *li;

	li = malloc(sizeof(listint_t));
	if (li != NULL)
	{
		li->n = n;
		li->next = NULL;
		l = *head;

		if (l == NULL)
			*head = li;
		else
		{
			while (l->next != NULL)
				l = l->next;

			l->next = li;
		}

		return (*head);
	}
	return (NULL);
}
