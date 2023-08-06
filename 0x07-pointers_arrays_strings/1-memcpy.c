#include "main.h"

/**
 * _memcpy -  function that copies memory area
 *
 * @n: bytes from memory are
 * @src: A pointer to the source memory location
 * @dest: A pointer to the destination memory location
 *
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
