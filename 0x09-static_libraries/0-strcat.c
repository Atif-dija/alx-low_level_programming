#include "main.h"

/**
 * _strcat -  function appends the src string to the dest string
 *
 * @dest: iput of function
 * @src: input of function
 *
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{

char *s_dest = dest;
char *s_src = src;

	while (*s_dest != '\0')
	{
		s_dest++;
	}

	while (*s_src != '\0')
	{
		*s_dest = *s_src;
		s_dest++;
		s_src++;
	}
	*s_dest = '\0';
	return (dest);
}
