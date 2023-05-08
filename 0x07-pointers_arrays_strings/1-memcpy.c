#include "main.h"
#include <stdio.h>

/**
 * _memcpy - copies memory area
 * @dest: takes pointer
 * @src: takes pointer
 * @n: takes integer
 * Return: Always 0
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	while (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			*dest = src[i];
		}
		dest++;
		n--;
	}
	return (dest);
}
