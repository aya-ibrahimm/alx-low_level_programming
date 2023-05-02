#include <stdlib.h>

#include "dog.h"

/**
 * init_dog - int var type of the dog in struct
 *
 * @name: name of dog to int
 * @d: dog ptr
 * @age: age of dog
 * @owner: whose owner of dog to int
 *
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->age = age;
		d->name = name;
		d->owner = owner;
	}
}
