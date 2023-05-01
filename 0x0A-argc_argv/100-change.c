#include <stdio.h>
#include <stdlib.h>
/**
 * cent - output remaining cents
 * @c: cent parameter
 * Return: always return 0 success
 */
int cent(int c)
{
	int t = 0;

	while (c != 0)
	{
		if (c >= 25)
		{
			c = c - 25;
			t++;
		}
		else if (c >= 10)
		{
			c = c - 10;
			t++;
		}
		else if (c >= 5)
		{
			c = c - 5;
			t++;
		}
		else if (c >= 2)
		{
			c = c - 2;
			t++;
		}
		else
		{
			c = c - 1;
			t++;
		}
	}
	return (t);
}
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
	int sum = 0;

	if (argc == 1)
	{
		printf("Error\n");
		return (1);
	}
	else if (argc < 0)
	{
		printf("0\n");
		return (0);
	}
	sum = atoi(argv[1]);
	sum = cent(sum);
	printf("%d\n", sum);
	return (0);
}
