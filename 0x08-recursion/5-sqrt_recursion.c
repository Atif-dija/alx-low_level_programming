#include "main.h"
int _sqrt(int n, int val);

/**
 * _sqrt_recursion -  returns the natural square root of a number
 *
 * @n: input of a function
 *
 * Return: a natural square root
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - returnthe natural square
 *
 * @n: input of a function
 * @val: square root
 *
 * Return: -1 if n does not have a natural square root
 * else return a natural square root
 */



int _sqrt(int n, int val)
{
	if (val * val == n)
		return (val);
	else if ((val * val) < n)
		return (_sqrt(n, val + 1));
	return (-1);
}


