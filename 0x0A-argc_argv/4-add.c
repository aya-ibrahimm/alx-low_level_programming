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
	int i, sum = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (atoi(argv[i]) == 0)
			{
				printf("Error\n");
				return (1);
			}
			sum = sum + atoi(argv[i]);
		}
	}
	printf("%d\n", sum);
	return (0);
}
