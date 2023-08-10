#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 *
 * @s1: first string
 * @s2: second string
 * @n: size of s2
 *
 * Return: a pointer or NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i, j, m = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[m] != '\0')
		m++;

	s = malloc(m + n + 1);

	for (i = 0; s1[i] != '\0'; i++)
		s[i] = s1[i];

	for (j = 0; j < n && i < n + m; j++, i++)
		s[i] = s2[j];

	s[i] = '\0';
	return (s);
}
