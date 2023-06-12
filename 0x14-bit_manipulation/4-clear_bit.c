#include "main.h"
#include <stddef.h>
#include <stdio.h>

/**
 * clear_bit - sets value of bit
 * @n: takes a pointer
 * @index: takes integer
 * Return: integer
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
	{
		return (-1);
	}
	*n = (~(1UL << index) & *n);
	return (1);
}
