#include "main.h"
#include <stdlib.h>

/**
 * _memset - function that fills memory with a constant byte
 *
 * @n: bytes of the memory area
 * @b: the constant byte
 * @s: a pointer to the memory area
 *
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}



/**
 * _calloc - allocates memory for an array "calloc"
 *
 * @nmemb: nember of elements
 * @size: size bytes
 *
 * Return: a pointer s or 0
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *s;


	if (nmemb == 0 || size == 0)
		return (NULL);
	s = malloc(nmemb * size);
	if (s == 0)
		return (NULL);
	_memset(s, 0, nmemb * size);
	return (s);
}
