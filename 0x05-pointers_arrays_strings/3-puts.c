#include "main.h"
#include <stdio.h>

/**
 * _puts - prints a string
 * @str: takes a character pointer
 * Return: Always 0
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str);
		str++;
	}
	putchar('\n');
}
