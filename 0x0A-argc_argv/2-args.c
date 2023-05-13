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
 * main - prints arguments
 * @argc: takes int
 * @argv: takes array of pointers
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		_puts_recursion(argv[i]);
	}
	return (0);
}
