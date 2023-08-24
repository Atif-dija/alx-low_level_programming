#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 *
 * @head: a list
 * @str: string of anew node
 *
 * Return: the address of the new element, or NULL
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t  *l;
	unsigned int size = 0;

	l = malloc(sizeof(list_t));
	while (str[size] != '\0')
		size++;

	if (l != NULL)
	{
		l->str = strdup(str);
		l->len = size;
		l->next = *head;
		*head = l;
		return (l);
	}
	return (NULL);
}

