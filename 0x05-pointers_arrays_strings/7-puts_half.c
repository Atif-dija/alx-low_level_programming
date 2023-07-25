#include "main.h"
#include<stdlib.h>

/**
 * puts_half -  function that prints half of a string
 *
 * @str: input of function
 */

void puts_half(char *str)
{
	size_t i, n, length = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		length++;
	}
	n = (length / 2);

	if ((length % 2) != 0)

		n = (length + 1) / 2;

	for (i = n; str[i] != '\0'; i++)
		_putchar(str[i]);

	_putchar('\n');
}
