#include "main.h"
#include <stdio.h>

/**
 * _memset - fills memory with contant byte
 * @s: takes character pointer
 * @b: takes character variable
 * @n: takes integer variable
 * Return: Always 0
 */
char *_memset(char *s, char b, unsigned int n)
{
	while (n > 0)
	{
		*s = b;
		s++;
		n--;
	}
	return (s);
}
