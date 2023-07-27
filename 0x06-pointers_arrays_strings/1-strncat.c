#include "main.h"

/**
 * _strncat -  function appends the src string to the dest string
 * The _strncat function is similar to the _strcat function, except that
 * it will use at most n bytes from src; and
 * src does not need to be null-terminated if it contains n or more bytes
 *
 * @dest: iput of function
 * @src: input of function
 * @n: input of function
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{

int i, j = 0;

	while (dest[j] != '\0')
	{
		j++;
	}

	for (i = 0; i < n && (src[i] != '\0'); i++)
	{
			dest[j + i] = src[i];
	}
	dest[j + i] = '\0';
	return (dest);
}
