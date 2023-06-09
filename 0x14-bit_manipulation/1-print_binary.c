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
	unsigned long int temp;

	for (temp = n, i = 0; (temp >>= 1) > 0; i++)
		;

	for (; i >= 0; i--)
	{
		if ((n >> i) & 1)
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
