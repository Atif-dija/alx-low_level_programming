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
	int n = 0, m = 0;
	int i, val, j = 0;

	while (*s1 != '\0')
	{
		n++;
		s1++;
	}
	while (*s2 != '\0')
	{
		m++;
		s2++;
	}

	if (n == m)
	{
		for (i = 0 ; i < n; i++)
		{
			if (s1[i] == s2[i])
			{
				val = 0;
			}
		}
	} else
	{
		if (s1[j] != s2[j])
		{
			val = -15;
		}
		else if (s2[j] != s1[j])
		{
			val = 15;
		}
	}
	return (val);
}
