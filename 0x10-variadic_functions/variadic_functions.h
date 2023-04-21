#ifndef vardiac_functions_prototype_functions_H
#define vardiac_functions_prototype_functions_H

#include <stdio.h>
#include <stdarg.h>

int _putchar(char);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
/**
 * struct formates - hold forms
 * @c: arguments
 * @f: hold function
 */
typedef struct formates
{
	char c;
	void (*f)(va_list);
} f_r;
void print_char(va_list argument);
void print_string(va_list argument);
void print_float(va_list argument);
void print_integer(va_list argument);
#endif /* vardiac_functions_prototype_functions_H */
