#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 * finds and prints the first 98 Fibonacci numbers, starting with 1 and 2
 *
 * Return: Always 0;
 */

int main(void)
{
	int i;
	unsigned long num1, num2, fib;

	num1 = 0;
	num2 = 1;

	for (i = 0; i < 98; i++)
	{

		fib = num1 + num2;
		printf("%lu", fib);
		num1 = num2;
		num2 = fib;

		if (i == 97)
			putchar('\n');
		else
			printf(", ");

	}
	return (0);
}
