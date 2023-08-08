#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: the contents of s1 contents of s2
 * or retuen NULL
 */

char *str_concat(char *s1, char *s2)
{
	char *str;
	unsigned int size1 = 0, size2 = 0, i, j;

	if (s1 == NULL)
		s1 = "\0";
	if (s2 == NULL)
		s2 = "\0";
	while (s1[size1] != '\0')
		size1++;
	while (s2[size2] != '\0')
		size2++;
	str = malloc((size1 + size2) * sizeof(*s1) + 1);
	if (str == 0)
		return (NULL);
	for (i = 0; i < size1; i++)
		str[i] = s1[i];

	for (j = 0; j < size2 && i < (size1 + size2); j++)
	{
		str[i] = s2[j];
		i++;
	}

	str[size1 + size2] = '\0';
	return (str);
}
