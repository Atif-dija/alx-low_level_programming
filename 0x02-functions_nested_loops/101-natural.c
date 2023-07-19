#include "main.h"
#include <stdio.h>

/**
 * print_natural - Entry point
 * computes and prints the sum of all the multiples of 3 or 5 below 1024
 */

void print_natural(void)
{
	int i, sum;

	sum = 0;
	for (i = 0; i <= 1024; i++)
	{
		if (((i % 3) == 0) || ((i % 5) == 0))
		sum = sum + i;
	}
	printf("%d\n", sum);
}
