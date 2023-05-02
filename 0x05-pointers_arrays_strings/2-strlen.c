#include "main.h"
#include <stdio.h>

/**
 * _strlen - finds the length of a string
 * @s: takes a character pointer
 * Return: Always 0
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
