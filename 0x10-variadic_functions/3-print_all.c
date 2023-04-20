#include <stdarg.h>
#include <stdio.h>
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
	va_start(myarguments, format);

	char c;
	int i;
	float f;
	char* s;
	while (*format)
 		{
		if (*format == 'c')
        	{
            	c = (char)va_arg(myarguments, int);
            	printf("%c", c);
        	}
        	else if (*format == 'i')
        	{
            	i = va_arg(myarguments, int);
            	printf("%d", i);
        	}
        	else if (*format == 'f')
        	{
            	f = va_arg(myarguments, float);
            	printf("%f", d);
        	}
        	else if (*format == 's')
        	{
            	s = va_arg(myarguments, char*);
            	if (s == NULL)
            	{
                printf("(nil)");
            	}
            	else
            	{
                printf("%s", s);
            	}
        	}

        	format++;
    		}
	va_end(myarguments);

	printf("\n");
}
