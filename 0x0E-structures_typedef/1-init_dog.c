#include "dog.h"
#include <stdio.h>

/**
 * init_dog - function that initializes the dog
 * @d: pointer to a dog
 * @name: name of a dog
 * @age: age of the dog
 * @owner: name of the owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
