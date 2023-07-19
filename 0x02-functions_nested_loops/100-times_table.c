#include "main.h"

/**
 * print_times_table - Entry point
 * prints the n times table, starting with 0
 *
 * @n: input of function
 */

void print_times_table(int n)
{
	int i, j, result;

		for (i = 0; i <= n; i++)
		{
		_putchar(48);

		for (j = 1; j <= n; j++)
		{

		result = i * j;

		_putchar(',');
		_putchar(' ');


		if (result <= 9)
		_putchar(' ');

		else if (result <= 99)
		_putchar((result / 10) + 48);

		else if (result >= 100)
		{
		_putchar(((result / 100) + 48));
		_putchar(((result / 10) % 10) + 48);
		}

	_putchar((result % 10) + 48);
		}
	_putchar ('\n');
		}
}
