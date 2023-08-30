#include "lists.h"

/**
 * sum_listint -  returns the sum of all the data (n) of a listint_t
 *
 * @head: linked list
 *
 * Return: sum or 0
 */

int sum_listint(listint_t *head)
{
	listint_t *l = head;
	int sum = 0;

	while (l != NULL)
	{
		sum += l->n;
		l = l->next;
	}
	return (sum);
}
