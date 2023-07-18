#include "main.h"

/**
 * _isalpha - this function checks for lowercase and uppercase character
 *
 * @c: cheks intuput of function
 *
 * Return: 1 if c is lowercase or uppercase
 *      otherwise always 0 (Success)
 */

int _isalpha(int c)
{
	if ((c <= 122 && c >= 97) || (c <= 90 && c >= 65))
		return (1);
	return (0);
}
