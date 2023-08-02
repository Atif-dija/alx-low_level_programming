#include "main.h"

/**
 * factorial - unction that returns the factorial of a given number
 *
 * @n: input of function
 *
 * Return: 1 if n=0
 * -1 if n is lower than 0
 * else return factorial
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}

