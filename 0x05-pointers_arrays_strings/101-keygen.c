#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	int sum = 0;
	char s;

	srand(time(NULL));
		while(sum <=2645 )
		{
			s=rand() % 128;
			sum = sum + s;
			putchar(s);
		}	
	putchar (2772 - sum);
	return (0);
}
