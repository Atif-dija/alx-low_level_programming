#include "main.h"
#include <stdlib.h>
#include <time.h>

/**
 * _strcmp - function that compares two strings
 *
 * @s1: input of function
 * @s2: input of function
 *
 * Return: cmp
 */

int _strcmp(char *s1, char *s2)
{
	int n = 0;

	while (s1[n] != '\0' && s2[n] != '\0')
	{
		if (s1[n] != s2[n])
			return (s1[n] - s2[n]);
		n++;
	}
	return (0);
}
