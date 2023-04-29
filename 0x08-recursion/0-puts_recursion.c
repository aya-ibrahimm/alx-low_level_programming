#include "main.h"

/**
 * _puts_recursion - func that will print a str followed by new li
 *
 *@s: str
 *
 * Return : void
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;

	}
		_putchar(*s);
		_puts_recursion((s + 1));
}
