#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main -  adds positive numbers
 *
 * @argc: The size of the argv array
 * @argv: An array of size argc
 *
 * Return:  1 If one of the number contains symbols that are not digits
 * or return Always 0
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	char *c;

	while (--argc)
	{
		for (c = argv[argc]; *c; c++)
		if (*c < '0' || *c > '9')
		{
			printf("Error\n");
			return (1);
		}
	sum += atoi(argv[argc]);
	}

	printf("%d\n", sum);

	return (0);
}
