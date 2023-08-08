#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * and initializes it with a specific char
 *
 * @size: siezof array
 * @c: specific char
 *
 * Return: NULL if size == 0
 * else return a pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *s = &c;

	s = malloc(size * sizeof(char));
	if (size != 0 && s != 0)
	{
		while (size > 0)
		{
			s[size] = c;
			size--;
		}
		return (s);
	}
	return (0);
}


