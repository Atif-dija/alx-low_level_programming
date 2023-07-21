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
	long num = 612852475143;
	long largest = 0;
	long i;

	while (num % 2 == 0)
	{
		largest = 2;
		num /= 2;
	}

	for (i = 3; i * i <= num; i += 2)
	{
		while (num % i == 0)
		{
			largest = i;
			num /= i;
		}
	}

	if (num > 2)
		largest = num;

	printf("%ld\n", largest);
	return (0);
}
