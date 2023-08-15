#include "dog.h"

/**
 * free_dog - frees dogs
 *
 * @d: pointer of struct dog
 */

void free_dog(dog_t *d)
{
	if (d != 0)
	{
		if (d->name != NULL)
			free(d->name);
		if (d->owner != NULL)
			free(d->owner);
		free(d);
	}
}
