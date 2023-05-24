#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_name - prints name
 * @name: takes pointer
 * @f: takes function pointer
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
