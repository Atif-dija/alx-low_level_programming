#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters
 *
 * @n: the number of integers
 *
 * Return: sum or 0 if (n == 0)
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list l_args;
	unsigned int i;
	int sum = 0;

	va_start(l_args, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
		sum += va_arg(l_args, int);

	va_end(l_args);
	return (sum);
}
