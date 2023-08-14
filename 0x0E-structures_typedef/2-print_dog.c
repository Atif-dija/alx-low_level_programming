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
			printf(" Name: nil\n Age: %f\n Owner: %s\n", d->age, d->owner);
		if (d->age == 0)
			printf(" Name: %s\n Age: nil\n Owner: %s\n", d->name, d->owner);
		if (d->owner == NULL)
			printf(" Name: %s\n Age: %f\n Owner: nil\n", d->name, d->age);

		printf(" Name: %s\n Age: %f\n Owner: %s\n", d->name, d->age, d->owner);
	}
}
