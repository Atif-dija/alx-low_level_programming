#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the min number of coins to make change for an amount of money
 *
 * @argc: The size of the argv
 * @argv: An array of size argc
 *
 * Return: 1 f the number of arguments passed to your program is not exactly 1
 * or return 0
 */

int main(int argc, char *argv[])
{
	int i, money, nbr_coins = 0;
	int cents[5] = {25, 10, 5, 2, 1};

	if (argc == 2)
	{
		money = atoi(argv[1]);
		for (i = 0; i < 5; i++)
		{
			if (money >= cents[i])
			{
				nbr_coins += money / cents[i];
				money = money % cents[i];
				if (money % cents[i] == 0)
					break;
			}

		}
		printf("%d\n", nbr_coins);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}

