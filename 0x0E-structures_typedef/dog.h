#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a dog struct
 *
 * @name: name of a dog
 * @age: age of a dog
 * @owner: owner of a dog
 *
 * description: a new struct "dog"
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
