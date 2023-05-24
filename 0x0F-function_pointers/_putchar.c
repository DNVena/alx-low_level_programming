#include "function_pointers.h"
#include <unistd.h>

/**
 * _putchar - prints
 * @c: takes character
 * Return: void
 */
void _putchar(char c)
{
	write(1, &c, 1);
}
