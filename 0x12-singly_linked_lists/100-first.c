#include "lists.h"

void first() __attribute__((constructor));

/**
 * first - prints a paragraph before the main function is executed
 */

void first()
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}

