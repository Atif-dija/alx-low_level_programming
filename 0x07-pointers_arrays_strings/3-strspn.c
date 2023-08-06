#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 *
 * @s: string "input of function"
 * @accept: input of function
 *
 * Return: the number of bytes in the initial segment of s
 * which consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int cmp = 0;
	int i, j = 0;

	for (i = 0; s[i] > '\0'; i++)
	{
		for (j = 0; accept[j] > '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				cmp++;
				break;
			}
			else if (accept[j + 1] == '\0')
				return (cmp);
		}
	}
	return (cmp);
}

