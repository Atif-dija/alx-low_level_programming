#include "main.h"

/**
 * print_last_digit - Entry point
 * prints the last digit of a number
 *
 *@num:input of function
 *
 *Return:L_digit
 */

int print_last_digit(int num)
{
	int L_digit;

	if (num < 0)
		L_digit = -1 * (num % 10);
	else
		L_digit = num % 10;

	_putchar(L_digit + 48);

	return (L_digit);
}
