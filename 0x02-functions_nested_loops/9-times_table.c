#include "main.h"

/**
 * times_table - Entry point
 * prints the 9 times table, starting with 0
 */

void times_table(void)
{
	int i, j, multi;

	for (i = 0; i < 10 ; i++)
	{
		_putchar(48);
		for (j = 1; j < 10; j++)
		{
			multi = i * j;

			_putchar(',');
			_putchar(' ');

			if (multi <= 9)
				_putchar(' ');
			else
				_putchar((multi / 10) + 48);

		_putchar((multi % 10) + 48);
		}
	_putchar('\n');
	}
}
