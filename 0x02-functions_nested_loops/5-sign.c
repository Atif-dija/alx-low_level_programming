#include "main.h"

/**
 * print_sign - this function prints the sign of a number
 *
 * @n: intuput of function
 *
 * Return: 1 n is greater than zero
 *	0 if n is zero
 *	if n is less than zero always -1 (Success)
 */

int print_sign(int n)
{
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else
	{
		_putchar(0+48);
		return (0);
	}
}
