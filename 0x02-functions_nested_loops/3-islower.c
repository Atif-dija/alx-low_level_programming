#include "main.h"

/**
 * _islower - this function hecks for lowercase character
 *
 * @c: cheks intuput of function
 *
 * Return: 1 if c is lowercase
 *	otherwise always 0 (Success)
 */

int _islower(int c)
{
	if (c <= 122 && c >= 97)
		return (1);
	return (0);
}
