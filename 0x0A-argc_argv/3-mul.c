#include <stdio.h>
#include <stdlib.h>

/**
 * main -  multiplies two numbers
 *
 * @argc: The size of the argv array
 * @argv: An array of size argc
 *
 * Return: 1 if argc != 3
 * or return 0
 */

int main(int argc, char *argv[])
{

	int sum = 0;

	if (argc == 3)
	{
		sum = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", sum);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
