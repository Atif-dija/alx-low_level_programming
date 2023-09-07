#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 *
 * @n: unsigned long integer
 * @index: the index
 *
 * Return: 1 if it worked, or -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);
	else
		return ((n >> index) & 1);
}
