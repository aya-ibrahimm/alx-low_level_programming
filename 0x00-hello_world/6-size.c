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
printf("Size of a char: %lu bytes(s)/n", sizeof(char));
printf("Size of an int: %lu bytes(s)/n", sizeof(int));
printf("Size of a long int: %lu bytes(s)/n", sizeof(long int));
printf("Size of a long long int: %d bytes(s)/n", sizeof(long long int) * 2);
printf("Size of a float: %lu bytes(s)/n", sizeof(float));
return (0);
