#include "main.h"
#include <stdlib.h>

/**
 * _strstr -  function that locates a substring
 *
 * @haystack: string
 * @needle: substring
 *
 * Return: a pointer to the beginning of the located substring
 * or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *p = haystack;
		char *q = needle;

		while (*p == *q && *q != '\0')
		{
			p++;
			q++;
		}
		if (*q == '\0')
			return (haystack);
	}
	return (NULL);
}
