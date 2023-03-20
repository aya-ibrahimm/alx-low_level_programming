#include <stdio.h>

/**
 * main - c program
 *
 *Return: return 0 (success)
 */
int main(void)
{
	char *s = "abcdfghijklmnoprstuvwxyz1";
	int i = 0;

	while (s[i] != '1')
	{
	putchar(s[i]);
	i++;
	}
	putchar('\n');
	return (0);
}
