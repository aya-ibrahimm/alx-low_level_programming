#include <stdlib.h>

/**
 * *create_array - func that creates arr and int with a char
 *
 * @size: it is size of giv arr
 * @c: the character i need to int
 * Return: return
 */

char *create_array(unsigned int size, char c)
{
	char *inarr = (char *) malloc(size * sizeof(char));
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	if (inarr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		inarr[i] = c;
	}
return (inarr);
}
