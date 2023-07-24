#include "main.h"
#include <stdio.h>

/**
 * print_array -  function that prints n elements of an array of integers
 *
 * @a: input of function
 * @n: input of function
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
		printf("%d, ", a[i]);
	printf("\n");
}
