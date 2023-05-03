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
/**
 * print_rev - prints string in reverse
 * @s: takes character pointer
 * Return: Always 0
 */
void print_rev(char *s)
{
	int len = _strlen(s);
	int i;

	for (i = (len - 1); i >= 0; i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}
