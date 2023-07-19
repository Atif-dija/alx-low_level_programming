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

	if (n <= 13 && n >= 0)
	{
		for (i = 0; i <= n; i++)
		{
		_putchar(48);

		for (j = 1; j <= n; j++)
		{

		_putchar(',');
		_putchar(' ');

		result = i * j;


		if (result <= 9)
		_putchar(' ');

		if (result <= 99)
		_putchar(' ');

		if (result <= 99 && result >= 10)
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
}
