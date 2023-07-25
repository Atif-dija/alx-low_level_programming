#include "main.h"

/**
 * _puts -  function that prints a string, followed by a new line
 *
 * @str: input of function
 */

void _puts(char *str)
{
	int i, length = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		length++;
	}
	for (i = 0; i < length; i++)
		_putchar(str[i]);
	_putchar('\n');

}
