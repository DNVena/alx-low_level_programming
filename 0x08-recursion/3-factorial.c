#include "main.h"
#include <stdio.h>

/**
 * factorial - returns a factorial of a given number
 * @n: takes integer
 * Return: Integer
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
