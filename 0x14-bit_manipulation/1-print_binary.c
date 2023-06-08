#include "main.h"
#include <stdio.h>

/**
 * print_binary - prints binary rep
 * @n: takes integer
 * Return: integr
 */
void print_binary(unsigned long int n)
{
	int i;

	for (i = 10; i >= 0; i--)
	{
		if (n & (1 << i))
		{
			_putchar('1');
		}
		else
		{
			_putchar('0');
		}
	}
	_putchar('\n');
}
