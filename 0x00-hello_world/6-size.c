#include <stdio.h>

/**
 * main - entry point
 *
 * Description: c program
 *
 * Return: 0 (success)
 */

int main(void)
{
	long int a = 8;

printf("Size of a char: %ld byte(s)\n", sizeof(char));
printf("Size of an int: %ld byte(s)", sizeof(int));
printf("Size of a long int: %ld bytes(s)\n", sizeof(long int));
printf("Size of a long long int: %ld bytes(s)\n", a);
printf("Size of a float: %ld bytes(s)\n", sizeof(float));
return (0);
}