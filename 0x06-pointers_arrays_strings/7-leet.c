#include "main.h"

/**
 * leet -  function that encodes a string into 1337
 *
 * @s: input of function
 *
 * Return: s
 */

char *leet(char *s)
{
	char *c = s;
	unsigned int i;
	char str[] = {'a', 'e', 'o', 't', 'l'};
	int tab[] = {4, 3, 0, 7, 1};

	while (*s != '\0')
	{
		for (i = 0; i < sizeof(str); i++)
		{
			if (*s == str[i] || *s == str[i] - ('a' - 'A'))
				*s = tab[i] + 48;

		}
		s++;
	}
	return (c);
}
