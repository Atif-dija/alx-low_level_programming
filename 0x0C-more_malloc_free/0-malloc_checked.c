#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked -  allocates memory with malloc
 *
 * @b: input of function
 *
 * Return: a pointer or NULL
 */

void *malloc_checked(unsigned int b)
{
	int *p;

	p = malloc(b);

	if (p == 0)
		exit(98);

	return (p);
}
