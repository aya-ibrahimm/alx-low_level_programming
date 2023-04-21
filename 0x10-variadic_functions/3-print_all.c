#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include "variadic_functions.h"

/**
 * print_all - is a function that prints anything
 *
 *@format: format
 *
 * Return: return
 */

void print_all(const char * const format, ...)
{
	va_list myarguments;
	int i = 0, j = 0;
	f_r forma[] = {
		{'c', &print_char},
		{'i', &print_integer},
		{'f', &print_float},
		{'s', &print_string},
	};

	va_start(myarguments, format);
	while (format[i] != '\0')
	{
		while (j < 4)
		{
			if (forma[j].c == format[i])
			{
				forma[j].f(myarguments);
				if (format[i] != format[strlen(format) - 1])
					printf(", ");
			}
			j++;
		}
		j = 0;
		i++;
	}
	va_end(myarguments);
	printf("\n");
}


/**
 * print_char - is a function that prints anything
 *
 * @argument: format
 */
void print_char(va_list argument)
{
	printf("%c", va_arg(argument, int));
}

/**
 * print_string - is a function that prints anything
 *
 * @argument: format
 */
void print_string(va_list argument)
{
	printf("%s", va_arg(argument, char *));
}

/**
 * print_integer - is a function that prints anything
 *
 * @argument: format
 */
void print_integer(va_list argument)
{
	printf("%d", va_arg(argument, int));
}

/**
 * print_float - is a function that prints anything
 *
 * @argument: format
 */
void print_float(va_list argument)
{
	printf("%f", va_arg(argument, double));
}
