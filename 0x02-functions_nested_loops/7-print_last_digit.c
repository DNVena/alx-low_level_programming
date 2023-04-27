#include "main.h"

/**
 * print_last_digit - prints last digit
 * @i: takes a integer
 * Return: Always 0
 */
int print_last_digit(int i)
{
	int num;

	num = i % 10;
	if (num < 0)
	{
		num = num * -1;
	}
	_putchar(num + '0');
	return (num);
}
