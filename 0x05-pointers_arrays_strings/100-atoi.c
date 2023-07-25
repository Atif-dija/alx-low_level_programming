#include "main.h"
#include <ctype.h>
#include<stdio.h>
/**
 * _atoi - unction that convert a string to an integer
 *
 * @s: input of function
 *
 * Return: integer if (there are numbers in the string)
 * 0 (if thre are no numbers in the string)
 */
int _atoi(char *s)
{
	int i, sign = 1, length = 0;
	unsigned int  cvr = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		length++;
	}
	for (i = 0; i < length; i++)
	{
		if (s[i] == '-')
			sign = sign * -1;

		else if (isdigit(s[i]) != 0)
			cvr = (cvr * 10) + (s[i] - '0');

		else if (cvr > 0)
			break;
	}
	return (cvr * sign);

}

