#include "main.h"
#include <stdio.h>

/**
 * _strcat - concatenates 2 strings
 * @dest: takes character pointer
 * @src: takes character pointer
 * @n: takes an integer
 * Return: Always 0
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (j <= n)
	{
		while (src[j] != '\0')
		{
			dest[i] = src[j];
			j++;
			i++;
		}
	}
	return (0);
}
