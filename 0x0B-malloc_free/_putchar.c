#include "main.h"
#include <unistd.h>

/**
 * _putchar - prints char
 * @c: takes char
 * return: void
 */
void _putchar(char c)
{
	write(1, &c, 1);
}
