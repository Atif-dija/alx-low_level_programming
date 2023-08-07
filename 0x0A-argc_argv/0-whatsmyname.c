#include <stdio.h>

/**
 * main - prints its name, followed by a new line
 *
 * @argc: The size of the argv array
 * @argv: An array of size argc
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
