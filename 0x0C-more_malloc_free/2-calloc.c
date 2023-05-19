#include "main.h"
#include <stdio.h>
#include <stdlib.h>

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

/**
 * _calloc - allocates memory for array
 * @nmemb: no of elements in array
 * @size: size of elements
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(size * nmemb);
	if (ptr == NULL)
	{
		return (NULL);
	}
	_memset(ptr, 0, nmemb * size);
	return (ptr);
}
