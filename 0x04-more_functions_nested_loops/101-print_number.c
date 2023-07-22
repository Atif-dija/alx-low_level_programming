#include "main.h"

/**
 * print_number - function that prints an integer
 *
 * @n: input of function
 */

void print_number(int n)
{

	if ((n > 999 && n < 10000) || (n > -999 && n < -10000))
	{
		_putchar((n / 1000) + 48);
		_putchar(((n % 1000) / 100) + 48);
		_putchar(((n % 100) / 10) + 48);
	}
	else if ((n > 99 && n < 1000) || (n > -99 && n < -1000))
	{
		_putchar((n / 100) + 48);
		_putchar(((n % 100) / 10) + 48);
	}
	else if ((n > 9 && n < 100) || (n > -9 && n < -100))
		_putchar((n / 10) + 48);
	_putchar((n % 10) + 48);
}
