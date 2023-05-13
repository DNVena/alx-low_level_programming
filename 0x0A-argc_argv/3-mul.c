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
 * _strint - strings int
 * @str: takes char
 * @num: takes int
 * Return: pointer
 */
char *_strint(char str[], int num)
{
	int i, rem, len = 0, n;

	n = num;

	while (n != 0)
	{
		len++;
		n /= 10;
	}
	for (i = 0; i < len; i++)
	{
		rem = num % 10;
		num = num / 10;
		str[len - (i + 1)] = rem + '0';
	}
	str[len] = '\0';
	return (str);
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
		int i = 0;
		int num1, num2;
		char str;
		char *t;
		char *p;

		p = &str;
		num1 = _toint(argv[1]);
		num2 = _toint(argv[2]);
		total = _mul(num1, num2);
		t = _strint(p, total);
		while (t[i] != '\0')
		{
			_putchar(t[i]);
			i++;
		}
	}
	_putchar('\n');
	return (0);
}
