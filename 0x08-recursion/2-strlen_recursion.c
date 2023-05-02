#include "main.h"

/**
 * _strlen_recursion - a func that gets len of str
 *
 * @s: the string itself
 *
 * Return: 0 0r a value
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 +  _strlen_recursion(s + 1));
	}
}
