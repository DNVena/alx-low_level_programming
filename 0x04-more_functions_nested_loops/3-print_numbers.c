#include <stdio.h>
#include "main.h"

/**
 * print_numbers - prints numbers
 * Return: Always 0
 */
void print_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	putchar('\n');
}
