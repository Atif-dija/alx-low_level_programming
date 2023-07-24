#include "main.h"
#include <stddef.h>

/**
 * puts2 - function that prints every other character of a string
 * starting with the first character
 *
 * @str: input of function
 */
void puts2(char *str)
{
	int length = 0;
	char *s = str;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	while (*str != '\0')
	{
		_putchar(*str);
		str += 2;
	}

	_putchar('\n');
}
