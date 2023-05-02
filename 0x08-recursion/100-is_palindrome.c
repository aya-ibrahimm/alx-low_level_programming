#include "main.h"
#include <string.h>

/**
 * is_palindrome - func that checks if string is apalindrome
 *
 * @s: the str that i've
 *
 * Return: return 0 if its not palindrome otherwise ret 1
 */

int is_palindrome(char *s)
{
	int strlength = strlen(s);

	if (strlength == 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
