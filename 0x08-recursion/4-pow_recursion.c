#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - returns value to the power of y
 * @x: takes integer
 * @y: takes integer
 * Return: Integer
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
	return (x * (_pow_recursion(x, y - 1)));
}
