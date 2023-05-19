#include "main.h"

/**
 * print_diagonal - prints a diagobal line
 * @n: takes integer
 * Return: void
 */
void print_diagonal(int n)
{
	int i = 0;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (i < n - 1)
		{
			_putchar(' ');
			i++;
		}
		_putchar('\\');
		_putchar('\n');
	}
}
