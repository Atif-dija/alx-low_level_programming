#include "main.h"

/**
 * print_alphabet - Entry point
 *
 * prints the alphabet, in lowercase with _putchar function
 *
 */

void print_alphabet(void)
{
	int alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}
	_putchar('\n');
}
