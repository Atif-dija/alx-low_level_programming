#include "main.h"
#include <stdlib.h>

/**
 * _strdup -  returns a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter
 *
 * @str: string "input of fuction"
 *
 * Return: a pointer to the duplicated string
 * or return NULL
 */

char *_strdup(char *str)
{
	char *s;
	int i, size = 0;

	if (str == NULL)
		return (NULL);
	while (str[size] !=  '\0')
	{
		size++;
	}
	s = malloc(size * sizeof(*str) + 1);
	if (s == 0)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < size; i++)
			s[i] = str[i];
	}
	return (s);
}
