#include "function_pointers.h"

/**
 * print_name - it is a func that prints any name
 *
 *@name:define the string's name
 *@f: the pointer i have to func
 *
 * Return: voidd
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
