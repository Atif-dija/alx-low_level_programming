#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * This program will assign a random number to n each time it is executed
 * Print the last digit of the number stored in the variable n
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int n;
	int Last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;


	Last_digit = n % 10;

if (Last_digit == 0)
printf("Last digit of %d is %d and is 0\n", n, Last_digit);
else if (Last_digit > 5)
printf("Last digit of %d is %d and is greater than 5\n", n, Last_digit);
else if (Last_digit <  6)
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, Last_digit);

	return (0);
}
