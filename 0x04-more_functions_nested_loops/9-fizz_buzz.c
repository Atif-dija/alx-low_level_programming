#include <stdio.h>

/**
 * main - Entry point
 * program that prints the numbers from 1 to 100
 * for multiples of three print Fizz
 * for the multiples of five print Buzz
 * for numbers which are multiples of both three and five print FizzBuzz
 *
 * Return: Always 0;
 */

int main(void)
{
	int i;
	char FB[] = "FizzBuzz";
	char F[] = "Fizz";
	char B[] = "Buzz";

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("%s", FB);
		}
		else if (i % 3 == 0)
		{
			printf("%s", F);
		}
		else if (i % 5 == 0)
		{
			printf("%s", B);
		}
		else
			printf("%d", i);
		if (i != 100)
			putchar(' ');
		else
			putchar('\n');
	}
	printf("\n");
	return (0);
}



