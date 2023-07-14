#include <stdio.h>

/**
 *main - Entry point
 *
 *Print all the letters except q and e
 *
 *Return: Always 0 (Success)
*/

int main(void)
{
	char i  = 'a';

	while (i < 'z')
	{
	if (i != 'e' && i != 'q')
	{
	putchar(i);
	}
	i++;
	}

	putchar('\n');

	return (0);
}
