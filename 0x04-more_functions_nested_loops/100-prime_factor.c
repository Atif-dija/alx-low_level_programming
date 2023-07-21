#include <stdio.h>

/**
 * main - Entry point
 * program that finds and prints the largest
 *  prime factor of the number 612852475143
 *
 * Return: Always 0;
 */

int main(void)
{
	long i, largest, div = 0, half, num;

	num = 612852475143;
	half = 612852475143 / 2;

	while (num % 2 == 0)
	{
		div = 2;
		num = num / 2;
	}
	largest = div;

	for (i = 3; i <= half; i = i + 2)
	{
		while (num % i == 0)
		{
			div = i;
			num = num / i;
		}
	if (div > largest)
		largest = div;

	}
	printf("%ld\n", largest);
	return (0);
}
