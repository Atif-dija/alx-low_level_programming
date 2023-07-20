#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * positive_or_negative - Entry point
 *
 * description: This function print the number stored in the variable i
 * is positive or negative
 *
 * @i: input of function
 *
 * Return: Always 0 (Success)
*/


void positive_or_negative(int i)
{


	if (i == 0)
	printf("%d is zero\n", i);
	else if (i > 0)
	printf("%d is positive\n", i);
	else if (i < 0)
	printf("%d is negative\n", i);

}
