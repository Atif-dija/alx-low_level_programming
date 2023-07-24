#include "main.h"

/**
 * reset_to_98 - function that takes a pointer to an int as parameter
 * and updates the value it points to to 98
 *
 * @n: input of a function
 */

void reset_to_98(int *n)
{
	int **p;

	p = &n;
	**p = 98;

}

