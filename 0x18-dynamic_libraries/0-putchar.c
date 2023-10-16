#include "main.h"
/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 *
 *prints _putchar the prototype of the function _putchar
 *
 */

int main(void)
{
	char ch[] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(ch[i]);
	}
	_putchar('\n');
	return (0);
}
