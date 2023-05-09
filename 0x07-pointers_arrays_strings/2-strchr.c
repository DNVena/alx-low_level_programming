#include "main.h"
#include <stdio.h>

/**
 * _strlen - finds the length of a string
 * @c: takes a string
 * Return: Always 0
 */
int _strlen(char c)
{
	int i = 0;

	while (c != '\0')
	{
		i++;
		c++;
	}
	return (i);
}

/**
 * _strchr - locates a character in a string
 * @s: takes pointer
 * @c: takes character variable
 * Return: Always 0
 */
char *_strchr(char *s, char c)
{
	int i;
	int n;
	int len;

	len = _strlen(c);

	for (i = 0; s[i]; i++)
	{
		if (s[i] == c)
		{
			n = i;
			break;
		}
	}
	while (n < len && s[n] != '\0')
	{
		putchar(s[n]);
		n++;
	}
	putchar('\n');
	return (0);
}
