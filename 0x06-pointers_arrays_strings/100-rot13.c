#include "main.h"

/**
 * rot13 -  function that encodes a string using rot13
 *
 * @s: input of function
 *
 * Return:c
 */

char *rot13(char *s)
{
	char *c = s;
	int i;
	char alph[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char alph_13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFJHIJKLM";

		while (*s)
		{
		for (i = 0; i < 52; i++)

		{
			if (*s == alph[i])
			{
				*s = alph_13[i];
				break;
			}
		}
		s++;
	}
	return (c);
}
