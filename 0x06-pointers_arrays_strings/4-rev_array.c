#include "main.h"
#include <stdio.h>

/**
 * reverse_array - reverses an array of integers
 * @a: takes an integer pointer
 * @n: takes an integer
 * Return: Always 0
 */
void reverse_array(int *a, int n)
{
	int i;

	for (i = n -1; i >= 0; i--)
	{
		putchar(a[i]);
	}
}
