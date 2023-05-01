#include <stdio.h>

/**
 * main - func that prints no of args
 *
 *@argc: args countr
 *@argv: args themselves
 *
 * Return: always return 0 success
 */

int main(int argc, char *argv[] __attribute__ ((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
