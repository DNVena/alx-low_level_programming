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
	
	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	
	while (j <= n)
	{
		for (j = 0; src[j] != '\0'; j++)
		{
			dest[i] = src[j];
			dest[i] = '\0';
		}
        }
	putchar(dest[i]);
	putchar('\n');
	return (0);
}
