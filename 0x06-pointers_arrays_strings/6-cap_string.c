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
	int i = 1;

	if (s[0] >= 'a' && s[0] <= 'z')
		s[0] = s[0] - ('a' - 'A');

	while (s[i] != '\0')
	{

	switch (s[i - 1])
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
			if (s[i] >= 'a' && s[i] <= 'z')
				s[i] = s[i] - ('a' - 'A');
			break;
	}
	i++;
	}
	return (s);
}




