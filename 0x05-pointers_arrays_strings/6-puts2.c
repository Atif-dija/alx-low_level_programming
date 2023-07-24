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
	int i, length = 0;
	char *s = str;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	for (i = 0; i < length; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}

	_putchar('\n');
}
