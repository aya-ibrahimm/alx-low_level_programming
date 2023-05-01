#include <stdio.h>

/**
 * main - func that prints all of the args
 *
 *@argc: args countr
 *@argv: args that are there
 *
 * Return: always return 0 success
 */

int main(int argc, char *argv[] __attribute__ ((unused)))
{
	int i;

	for (i = 1; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
