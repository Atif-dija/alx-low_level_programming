#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 *
 * @head: a list
 * @str: string of anew node
 *
 * Return: the address of the new element, or NULL
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t  *li, *ls;
	unsigned int size = 0;

	ls = malloc(sizeof(list_t));
	while (str[size] != '\0')
		size++;

	if (ls != NULL)
	{
		ls->str = strdup(str);
		ls->len = size;
		ls->next = NULL;
		li = *head;

		if (li == NULL)
			*head = ls;
		else
		{
		while (li->next != NULL)
			li = li->next;

		li->next = ls;
		}

		return (*head);
	}
	return (NULL);
}
