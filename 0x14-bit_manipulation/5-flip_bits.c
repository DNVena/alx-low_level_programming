#include "main.h"
#include <stdio.h>

/**
 * flip_bits - finds number of bits required to flip one number
 * @n: takes integer
 * @m: takes integer
 * Return: integer
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i = 0;
	unsigned long int diff;

	diff = n ^ m;
	while (diff)
	{
		i++;
		diff &= (diff - 1);
	}
	return (i);
}
