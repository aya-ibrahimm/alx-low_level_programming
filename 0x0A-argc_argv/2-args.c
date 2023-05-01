#include <stdio.h>

/**
 * main - func that prints all of the args
 *
 *@argc: args countr
 *@argv: args that are there
 *
 * Return: always return 0 success
 */

int main(int argc, char *argv[])
{
	int i = 1;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
