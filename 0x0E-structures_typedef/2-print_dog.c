#include <stdio.h>
#include <stdlib.h>

#include "dog.h"

/**
 * print_dog - func that prints a dog's struc
 *
 * @d: ptr in struc dog
 *
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return (0);
	}
	if (d->name == NULL)
	{
		printf("Name: %s\n", d->name: (nil));
	}
