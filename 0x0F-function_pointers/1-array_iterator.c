#include "function_pointers.h"

/**
 * void array_iterator - passing an array through a func poi
 *
 *@ array_iterator: it is arrays's integer
 *@size: sizing of the array i have
 *@action: the array's function pointer
 *
 *Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *value = array + size - 1;

	if (array && action && size)
		while (array <= value)
			action(*array++);
}
