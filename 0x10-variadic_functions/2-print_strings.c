#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - is a function that prints numbers
 *
 *@n: this is no of args
 *@...:to print the rest
 *@separator: it is the string seperator
 *
 * Return: return
 *
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list numberrs;

	va_start(numberrs, n);
	for (i = 0; i < n; i++)
	{
		printf("%s", va_arg(numberrs, char *));
		if (separator != NULL && i != (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(numberrs);
}
