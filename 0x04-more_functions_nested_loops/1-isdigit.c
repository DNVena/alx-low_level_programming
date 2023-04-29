#include <stdio.h>
#include "main.h"

/**
 * _isdigit - checks for digits
 * @c: takes an integer
 * Return: Always 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
