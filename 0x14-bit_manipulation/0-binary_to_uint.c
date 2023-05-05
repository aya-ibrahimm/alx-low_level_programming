#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - func that conv bin num to pov int
 *
 *@b: string to the func
 *
 * Return: pos_num
 */

unsigned int binary_to_uint(const char *b)
{
	int z;
	unsigned int pos_num = 0;

	if (b == NULL)
	{
		return (0);
	}

	for (z = 0; b[z]; z++)
	{
		if (b[z] == '0')
		{
			pos_num =  pos_num << 1;
		}
		else if (b[z] == '1')
		{
			pos_num = (pos_num << 1) | 1;
		}
		else
		{
			return (0);

		}
	}
	return (pos_num);
}
