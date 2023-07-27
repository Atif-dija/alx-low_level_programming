#include "main.h"

/**
 * cap_string - function that capitalizes all words of a string
 *
 * @s: input of function
 *
 * Return: s
 */

char *cap_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
	switch (s[i])
	{
		case ' ':
		case '\t':
		case '\n':
		case ',':
		case ';':
		case '.':
		case '!':
		case '?':
		case '"':
		case '(':
		case ')':
		case '{':
		case '}':
			if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
			{
				s[i + 1] = s[i + 1] - ('a' - 'A');
			}
			break;
	}
	i++;
	}
	return (s);
}




