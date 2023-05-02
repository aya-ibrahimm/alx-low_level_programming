#include "main.h"

/**
 * *malloc_checked - func that makes mem allocation
 * @b: it is an int
 * Return: malptr
 */

void *malloc_checked(unsigned int b)
{
	int *malptr = malloc(b * sizeof(b));

	if (malptr == NULL)
	{
		exit(98);
	}
	return (malptr);
}
