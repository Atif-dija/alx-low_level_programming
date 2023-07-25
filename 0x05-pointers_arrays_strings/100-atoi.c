#include "main.h"
#include <ctype.h>
#include<stdio.h>
/**
 * _atoi - unction that convert a string to an integer
 *
 * @s: input of function
 *
 * Return: Always 0;
 */
int _atoi(char *s)
{
	int i, length = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		length++;
	}
	for (i = 0; i < length; i++)
	{
		if (isdigit(s[i]) != 0)
		{
			if (s[i - 1] == '-')
				putchar('-');
			putchar(s[i]);
		}
	}
	return (0);
}

