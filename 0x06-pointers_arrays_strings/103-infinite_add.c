#include "main.h"

/**
 * rev_string - reverse array
 *
 * @str: input of function
 */

void rev_string(char *str)
{
	int i = 0;
	int j = 0;
	char cvr;

	while (str[i] != '\0')
	{
		i++;
	}
	i--;

	for (j = 0; j < i; j++, i--)
	{
		cvr = str[j];
		str[j] = str[i];
		str[i] = cvr;
	}
}

/**
 * infinite_add - function that adds two numbers
 *
 * @n1: number 1
 * @n2: number 2
 * @r: is the buffer that the function will use to store the result
 * @size_r: is the buffer size
 *
 * Return:  result
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int n = 0, N = 0, k = 0;
	int num1 = 0, num2 = 0, ret = 0, sum = 0;

	while (n1[n] != '\0')
	{
		n++;
	}
	while (n2[N] != '\0')
	{
		N++;
	}
	n--;
	N--;
	if (n >= size_r || N >= size_r)
		return (0);
	if (n1[0] == '-' || n2[0] == '-')
		return (0);
	/* adds two numbers*/
	while (n >= 0 || N >= 0 || ret)
	{
		num1 = n >= 0 ? n1[n] - '0' : 0;
		num2 = N >= 0 ? n2[N] - '0' : 0;
		sum = num1 + num2 + ret;
		if (sum >= 10)
			ret = 1;
		else
			ret = 0;
		if (k >= (size_r - 1))
			return (0);
		r[k] = (sum % 10) + '0';
		k++;
		n--;
		N--;
	}
	if (k == size_r)
		return (0);
	r[k] = '\0';
	rev_string(r);
	return (r);
}
