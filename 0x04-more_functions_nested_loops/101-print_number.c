#include "main.h"

/**
 * print_number - function that prints an integer
 *
 * @n: input of function
 */

void print_number(int n)
{

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n >= 10000 && n <= 9999)
	{
		_putchar((n / 1000) + 48);
		_putchar(((n % 1000) / 100) + 48);
		_putchar(((n % 100) / 10) + 48);
	}
	else if (n >= 100 && n <= 999)
	{
		_putchar((n / 100) + 48);
		_putchar(((n % 100) / 10) + 48);
	}
	else if (n >= 10 && n <= 99)
		_putchar((n / 10) + 48);
	_putchar((n % 10) + 48);
}
