#include <stdio.h>
#include "main.h"

/**
 * print_sign - checks if variable is positive or negative
 * @n: takes integer parameter
 * Return: Always integer 0 or 1
 */
int print_sign(int n)
{
	if (n > '\0')
	{
	putchar(43);
	return (1);
	}
	else if (n < '\0')
	{
	putchar(45);
	return (-1);
	}
	else
	{
	putchar(48);
	return (0);
	}
	putchar('\n')
}
