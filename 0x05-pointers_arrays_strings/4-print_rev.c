#include "main.h"

/**
 * print_rev - function that prints a string, in reverse
 * followed by a new line
 *
 * @s: input of function
 */

void print_rev(char *s)
{
	int i, length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	s--;
	for (i = length; i > 0; i--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');

}

