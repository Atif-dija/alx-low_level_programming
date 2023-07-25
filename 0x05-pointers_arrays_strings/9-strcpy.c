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

	for (i = 0; src[i] != '\0'; i++)
	{
		length++;
	}

	for (i = 0; i < length; i++)
	{
		dest[i] = src[i];
	}
	dest[length] = '\0';
	return (dest);
}


