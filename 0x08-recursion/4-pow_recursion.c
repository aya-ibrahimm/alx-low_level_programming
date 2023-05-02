#include "main.h"

/**
 * _pow_recursion - func that makes x power y
 *
 * @x: a num int
 * @y: num int
 *
 * Return: return -1 or value
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
