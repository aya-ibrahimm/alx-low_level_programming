#include <stdio.h>

/**
 * main - developing a program that prints a name of file that it was compiled
 *
 * Return: always return number 0
 *
 */
int main(void)
{
	printf("the program was compiled from this %s \n", __FILE__);
return (0);
}
