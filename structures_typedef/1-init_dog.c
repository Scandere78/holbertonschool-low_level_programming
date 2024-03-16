#include <stddef.h>
#include "dog.h"

/**
 * init_dog - Initialization of data dog
 * @d: Pointer structure dog
 * @name: Name of dog
 * @age: Age of dog
 * @owner: Owner of dog
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
