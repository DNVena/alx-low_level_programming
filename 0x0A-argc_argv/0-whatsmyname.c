#include "main.h"
#include <unistd.h>

/**
 * _putchar - prints characters
 * @c: takes characters
 * Return: Always character
 */

void _putchar(char c)
{
	write(1, &c, 1);
}

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

/**
 * main - prints name of file
 * @argc: takes int
 * @argv: takes pointer to array
 * Return: Always (0)
 */

int main(int __attribute__ ((unused)) argc, char *argv[])
{
	_puts_recursion(argv[0]);
	return (0);
}
