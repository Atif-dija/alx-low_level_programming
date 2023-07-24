#include "main.h"

/**
 * swap_int - function that swaps the values of two integers
 *
 * @a: input of a function
 * @b: input of a function
 */

void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b= swap;
}

