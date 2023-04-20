#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - is a function that prints numbers
 *
 *@n: this is no of args
 *@...:to print the rest
 *@separator: it is the string seperator
 *
 * Return: return
 *
 */

void print_numbers(const char *separator, const unsigned int n, ...);
{
unsigned int i
va_list args;
va_start(args, n);

	for (i = 0; i < n; i++)
	{
	printf("%d", args);
	va_arg(args, int);

	if (i < n - 1 && separator != NULL; i++)
	{
	printf("%s", separator);
	}
	}
va_end(args);
}
