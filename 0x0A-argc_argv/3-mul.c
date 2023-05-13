#include "main.h"
#include <stdio.h>

/**
 * _mul - multiplies 2 numbers
 * @a: takes int
 * @b: takes int
 * Return: int
 */
int _mul(int a, int b)
{
	int mul;

	mul = a * b;
	return (mul);
}

/**
 * _toint - converts string to int
 * @str: takes string
 * Return: int
 */
int _toint(char str[])
{
	int i = 0;
	int sum = 0;

	while (str[i] != '\0')
	{
		sum = sum * 10 + (str[i] - 48);
		i++;
	}
	return (sum);
}

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
 * main - runs _mul function
 * @argc: takes int
 * @argv: takes array of pointers
 * Return: int
 */
int main(int argc, char *argv[])
{
	if (argc < 3)
	{
		int j;
		char *n;

		n = "Error";

		for (j = 0; n[j] != '\0'; j++)
		{
			_putchar(n[j]);
		}
		_putchar('\n');
		return (1);
	}
	else
	{
		int total;
		int num1, num2;

		num1 = _toint(argv[1]);
		num2 = _toint(argv[2]);
		total = _mul(num1, num2);
		_prt(total);
	}
	_putchar('\n');
	return (0);
}
