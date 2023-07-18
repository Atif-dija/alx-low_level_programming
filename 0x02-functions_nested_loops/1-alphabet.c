#include "main.h"

/**
 * main - Entry point
 *
 * prints the alphabet, in lowercase with _putchar function
 *
 * Return: Always 0.
 */

int main(void)
{
	int alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}
	_putchar('\n');
	return (0);
}
