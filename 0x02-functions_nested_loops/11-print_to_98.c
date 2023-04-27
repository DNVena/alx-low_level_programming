#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints to 98
 * @n: takes an integer
 * Return: Always 0
 */
void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
	for (i = n; i <= 98; i++)
	{
	if (n == 98)
	{
	printf("%d", i);
	printf("\n");
	break;
	}
	}
	}
	else if (n >= 98)
	{
	for (i = n; i >= 98; i--)
	{
	if (i == 98)
	{
	printf("%d", i);
	printf("\n");
	break;
	}
	}
	}
}
