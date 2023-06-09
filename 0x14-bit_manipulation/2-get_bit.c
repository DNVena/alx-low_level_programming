#include "main.h"
#include <stddef.h>
#include <stdio.h>

/**
 * get_bit - finds element at given index
 * @n: takes integer
 * @index: takes integer
 * Return: integer
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int num;

	if (index > 64)
	{
		return (-1);
	}
	num = n >> index;
	return (num & 1);
}
