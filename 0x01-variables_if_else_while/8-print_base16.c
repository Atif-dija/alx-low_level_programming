#include <stdio.h>

/**
 *main - Entry point
 *
 *Prints all the numbers of base 16 in lowercase
 *
 *Return: Always 0 (Success)
*/

int main(void)
{
	int num;
	char alpha;

	for (num = 0; num < 10; num++)
	{

	putchar(num + '0');

	}

	for (alpha = 'a'; alpha < 'g'; alpha++)
	{
	putchar(alpha);
	}
	putchar('\n');
	return (0);
}
