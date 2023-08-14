#include <stdio.h>
#include "dog.h"

/**
 * print_dog -  prints a struct dog
 *
 * @d: struct dog
 */

void print_dog(struct dog *d)
{
	if (d != 0)
	{
		if (d->name == NULL)
			printf("Name: nil\n Age: %f\n Owner: %s\n", d->age, d->owner);

		printf("Name: %s\n Age: %f\n Owner: %s\n", d->name, d->age, d->owner);
	}
	printf(" ");
}
