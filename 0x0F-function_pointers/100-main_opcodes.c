#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its own main function
 *
 * @argc: The size of the argv
 * @argv: An array of size argc
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i = 0, n_bytes;
	char *f;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	n_bytes = atoi(argv[1]);

	if (n_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	f = (char *)main;

	while (i < n_bytes - 1)
	{
		printf("%02hhx ", f[i]);
		i++;
	}
	printf("%02hhx\n", f[i]);

	return (0);
}

