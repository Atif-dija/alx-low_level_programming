#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 * that finds and prints the sum of the even-valued terms
 *
 * Return: Always 0;
 */

int main(void)
{
	unsigned long num1, num2, fib, sum;

	num1 = 0;
	num2 = 1;
	sum = 0;

	while (1)
		{

		fib = num1 + num2;
		if (fib % 2 == 0)
			sum = sum + fib;
		num1 = num2;
		num2 = fib;
		if (fib > 4000000)
			break;

		}
	printf("%lu\n", sum);
	return (0);
}
