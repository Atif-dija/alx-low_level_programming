#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 * prints the first 50 Fibonacci numbers, starting with 1 and 2
 *
 * Return: Always 0;
 */

int main(void)
{
	int i, fib, num1, num2;

	num1 = 0;
	num2 = 1;

	for (i = 0; i < 50; i++)
	{

		fib = num1 + num2;
		printf("%d", fib);
		num1 = num2;
		num2 = fib;

		if (i == 49)
			putchar('\n');
		else
			printf(", ");

	}
	return (0);
}
