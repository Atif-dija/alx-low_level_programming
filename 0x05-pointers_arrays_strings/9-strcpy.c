#include "main.h"

/**
 * _strcpy -  function that copies the string pointed to by src
 *  including the terminating null byte (\0)
 *  to the buffer pointed to by dest
 *
 *  @src: input pf function
 *  @dest: input of function
 *
 *  Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int i, length = 0;

	while (*src != '\0')
	{
		length++;
	}

	for (i = 0; src[i] < length; i++)
		dest[i] = src[i];
	dest[length] = '\0';
	return (dest);
}


