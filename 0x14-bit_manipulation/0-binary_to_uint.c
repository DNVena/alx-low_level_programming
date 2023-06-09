#include "main.h"
#include <stddef.h>
#include <stdio.h>

/**
 * binary_to_uint - converts binary to decimal
 * @b: takes const pointer
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	unsigned int value = 0;

	if (b == NULL)
	{
		return (0);
	}
	while (b[i] == '0' || b[i] == '1')
	{
		value <<= 1;
		value += b[i] - '0';
		i++;
	}
	for (i = 0; b[i]; i++)
	{
		if (b[i] != '1' && b[i] != '0')
		{
			return (0);
		}
	}
	return (value);
}
