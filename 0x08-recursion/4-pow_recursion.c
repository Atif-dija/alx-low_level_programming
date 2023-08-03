#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y
 *
 * @x: input of a function
 * @y: input of a function
 *
 * Return: -1 if y is lower than 0
 * 1 if y = 0
 * else return pow
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else if (y > 0)
		return (x *  _pow_recursion(x, y - 1));
	return (0);
}
