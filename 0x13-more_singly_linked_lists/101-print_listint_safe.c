#include <stdio.h>

/**
 * listint_len - Counts the number of nodes
 * in a looped listint_t linked list
 * @head: a linked list
 *
 * Return: 0 if the list is not looped
 * or the number of nodes in the list.
 */

size_t listint_len(const listint_t *head)
{
	const listint_t *l, *p;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		exit(98);

	l = head->next;
	p = (head->next)->next;

	while (p)
	{
		if (l == p)
		{
			l = head;
			while (l != p)
			{
				nodes++;
				l = l->next;
				p = p->next;
			}
			l = l->next;
			while (l != p)
			{
				nodes++;
				l = l->next;
			}

			return (nodes);
		}

	l = l->next;
	p = (p->next)->next;
	}
	return (0);
}

/**
 * print_listint_safe - Prints a listint_t list safely
 * @head: a linked list
 *
 * Return: the number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, i = 0;

	nodes = listint_len(head);

	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (i = 0; i < nodes; i++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}
	return (nodes);
}
