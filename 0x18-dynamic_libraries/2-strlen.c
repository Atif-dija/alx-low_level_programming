#include "main.h"
#include<string.h>
#include<stdlib.h>

/**
 * _strlen - function that returns the length of a string
 *
 * @s: input of function
 *
 * Return: the length of a string
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	return (length);
}
