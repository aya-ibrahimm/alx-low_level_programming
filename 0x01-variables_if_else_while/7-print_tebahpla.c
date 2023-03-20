#include <stdio.h>

/**
 * main - c program
 *
 *Return: return 0 (success)
 */
int main(void)
{
char c;
for (c = 'z'; c >= 'a'; --c)
	putchar(c);
putchar('\n');
return (0);
}
