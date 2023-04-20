#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - create a vardiac function to get sum of param
 * @n: paramter for var function
 * Return: return always 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i, sum = 0;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}
	va_end(args);
	return (sum);
}
