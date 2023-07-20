#include "main.h"

/**
 * print_diagonal - Entry point
 * function that draws a diagonal line in the terminal
 *
 * @n: input of function
 */

void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)

			_putchar(' ');

		_putchar('\\');
		_putchar('\n');
		}
	}
	else

	_putchar('\n');
}
