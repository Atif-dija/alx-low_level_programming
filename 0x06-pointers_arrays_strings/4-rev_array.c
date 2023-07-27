#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 *
 * @a: input of function
 * @n: input of function
 */

void reverse_array(int *a, int n)
{
	int i, temp, j = n - 1;

	for (i = 0; i < j; i++)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
		j--;
	}
}
