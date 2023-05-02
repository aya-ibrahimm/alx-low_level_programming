#include <stdlib.h>
#include <stdio.h>

#include "dog.h"

/**
 *  *new_dog - func that will create new dog's struct
 *
 * @owner: new owner
 * @name: new name
 * @age: new age
 *
 * Return: new dog struct
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	static dog_t new_dog_str;

	if (age && name && owner)
	{
		new_dog_str.age = age;
		new_dog_str.name = name;
		new_dog_str.owner = owner;

		return (&new_dog_str);
	}
	return (NULL);
}
