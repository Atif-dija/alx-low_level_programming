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
			printf("Name: nil\nAge: %f\nOwner: %s\n", d->age, d->owner);

		if (d->owner == NULL)
			printf("Name: %s\nAge: %f\nOwner: nil\n", d->name, d->age);

		printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
	}
	return;
}
