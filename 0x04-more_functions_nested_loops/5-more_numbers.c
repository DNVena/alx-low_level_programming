#include <stdio.h>
#include "main.h"

/**
 * _prt - prints int
 * @n: takes int
 * Return: void
 */
void _prt(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n / 10)
	{
		_prt(n / 10);
	}
	_putchar(n % 10 + '0');
}

/**
 * more_numbers - prints numbers
 * Return: Always 0
 */
void more_numbers(void)
{
	int i;
	int j = 0;

	while (j < 10)
	{
		for (i = 0; i < 15; i++)
		{
			_prt(i);
		}
		_putchar('\n');
		j++;
	}
}
