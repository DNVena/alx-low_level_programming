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
