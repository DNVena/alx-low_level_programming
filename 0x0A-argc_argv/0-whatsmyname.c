#include "main.h"

/**
 * _puts_recursion - prints a string
 * @s: takes character pointer
 * Return: void
 */
void _puts_recursion(char *s)
{
	_putchar(*s);
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

/**
 * main - prints name of file
 * @argc: takes int
 * @argv: takes pointer to array
 * Return: Always (0)
 */

int main(int argc, char *argv[])
{
	_puts_recursion(argv[0]);
	return (0);
}
