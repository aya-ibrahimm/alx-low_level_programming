#include "function_pointers.h"

/**
 * int_index - it is func that searches for int
 *
 *@array: the array integer
 *@size: the size of arr
 *@cmp: comapring func
 *
 * Return: return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int z = 0;
	if (size <= 0)
	{
		return (-1);
	}

	if (cmp && size && array)
	{
		while (z < size)
		{
			if (cmp(array[z]) != 0)
			{
				return(z);
			z++;
			}
		}
	}

return (-1);
}
