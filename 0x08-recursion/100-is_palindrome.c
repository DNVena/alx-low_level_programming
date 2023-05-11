#include "main.h"
#include <stdio.h>

/**
 * _rev - reverses string
 * @s: takes pointer
 * Return: string
 */
char *_rev(char *s)
{
	char n;
	char *t;
	t = &n;

	if (*s != '\0')
	{
		_rev(s + 1);
		*t = *s;
	}
	return (t);
}

/**
 * is_palindrome - checks if string is palindrome
 * @s: takes pointer
 * Return: Integer
 */
int is_palindrome(char *s)
{
	int i;
	char *t;

	t = _rev(s);
	if (*t != '\0' && *s != '\0')
	{
		is_palindrome(s + 1);
		is_palindrome(t + 1);
		if (*t == *s)
		{
			i = 1;
		}
		else if (*t != *s)
		{
			i = 0;
		}
	}
	return (i);
}
