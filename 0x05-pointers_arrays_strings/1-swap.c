#include "main.h"
#include <stdio.h>

/**
 * swap_int - swaps values
 * @a: takes integer pointer
 * @b: takes integer pointer
 * Return: Always 0
 */
void swap_int(int *a, int *b)
{
	int i;

	i = *b;
	*b = *a;
	*a = i;
}
