#include <stdlib.h>

#include "dog.h"

/**
 * free_dog - func that will free the dog's struct
 *
 * @d: ptr to dog str
 *
 * Return: void
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d->age);
		free(d);
	}
}
