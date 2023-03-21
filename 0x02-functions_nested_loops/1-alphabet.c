#include <stdio.h>

/**
 * main - Entry point
 *
 *Description: print_alphabet
 *
 *Return: return 0 (success)
 */

void print_alphabet(void)
{
char c = 'a';

while (c <= 'z')
{
	putchar(c);
	c++;

}
putchar('\n');
}
int main(void)
{
	print_alphabet();
return (0);
}

