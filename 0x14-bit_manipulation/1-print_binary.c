#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 *
 * @n: unsigned integer
 */

void print_binary(unsigned long int n)
{
	int bit, i = 0;

	bit = sizeof(n) * 8;
	while (bit != 0)
	{
		--bit;
		if (n & 1L << bit)
		{
			_putchar('1');
			i++;
		}
		else if (i)
			_putchar('0');
	}
	if (!i)
		_putchar('0');
}

