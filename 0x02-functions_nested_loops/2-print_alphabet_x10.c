#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 *
 * prints 10 times the alphabet, in lowercase
 */

void print_alphabet_x10(void)
{
	int alpha;
	int i;

	for (i = 0; i < 10; i++)
	{
	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);

	}
	_putchar('\n');
	}
}
