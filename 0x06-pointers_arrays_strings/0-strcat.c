#include "main.h"
#include <stdio.h>

/**
 * _strcat - concatenates 2 strings
 * @dest: takes character pointer
 * @src: takes character pointer
 * Return: Always 0
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}

	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		dest[i] = '\0';

	}
	putchar(dest[i]);
	putchar('\n');
	return (0);
}
