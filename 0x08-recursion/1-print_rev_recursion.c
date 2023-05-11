#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * _print_rev_recursion - prints string in reverse
 * @s: takes char pointer
 * Return: Always void
 */
void _print_rev_recursion(char *s)
{
	*s = *(s - 2);
	write (1, s, 1);
}
