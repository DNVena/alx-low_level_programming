#include "main.h"
#include <stddef.h>
#include <stdio.h>

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
 * binary_to_uint - converts binary to decimal
 * @b: takes const pointer
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num, temp;
	unsigned int i, last_digit, value = 0, base = 1;
	char str[50];

	if (b == NULL)
	{
		return (0);
	}

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '1' && b[i] != '0')
		{
			return (0);
		}
		else
		{
			str[i] = b[i];
		}
	}
	num = _toint(str);

	temp = num;
	while (temp)
	{
		last_digit = temp % 10;
		value = value + last_digit * base;
		temp = temp / 10;
		base = base * 2;
	}
	return (value);
}
