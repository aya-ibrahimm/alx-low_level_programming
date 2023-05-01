#include <stdio.h>

/**
 * main - function taking args that'll print prog name
 *
 * Description: print prog name
 * @argc: counting args
 * @argv: args
 *
 * Return: always return 0
 */

int main(int argc __attribute__ ((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
