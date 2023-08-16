#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * @argc: The size of the argv
 * @argv: An array of size argc
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int a;
	int b;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	 a = atoi(argv[1]);
	 b = atoi(argv[3]);
	 op = argv[2];

	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		return (99);
	}

	if ((*op == '/' || *op == '%') && b == 0)
	{
		printf("Error\n");
		return (100);
	}

	printf("%d\n", get_op_func(op)(a, b));
	return (0);
}








