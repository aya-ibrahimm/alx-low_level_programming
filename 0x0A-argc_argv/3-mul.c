#include <stdio.h>
#include <stdlib.h>

/**
 * main - func that multiplies two of the args
 *
 *@argc: args countr
 *@argv: args that are there
 *
 * Return: always return 0 success
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);

}
