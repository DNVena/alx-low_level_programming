#include "main.h"
#include <unistd.h>
#include <stdio.h>

/**
 * _puts_recursion - prints a string
 * @s: takes character pointer
 * Return: void
 */
void _puts_recursion(char *s)
{
	write(1, s, 1);
	s++;
	if (*s)
	{
		_puts_recursion(s);
	}
	if (*s == '\0')
	{
		_putchar('\n');
	}
}
