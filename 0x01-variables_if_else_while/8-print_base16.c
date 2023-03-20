#include <stdio.h>

/**
 * main - c program
 *
 *Return: return 0 (success)
 */
int main(void)
{
char c;
int i;
for (i = 0; i <= 9; ++i)
	putchar(i + '0');
for (c = 'a'; c <= 'f'; ++c)
	putchar(c);
putchar('\n');
return (0);
}
