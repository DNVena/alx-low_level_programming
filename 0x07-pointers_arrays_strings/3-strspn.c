#include "main.h"
#include <stdio.h>

/**
 * _strlen - finds the length of a string
 * @c: takes a string
 * Return: Always 0
 */
int _strlen(char *c)
{
	int i = 0;

	while (*c != '\0')
	{
		i++;
		c++;
	}
	return (i);
}

/**
 * _strspn - gets a length
 * @s: takes character pointer
 * @accept: takes character pointer
 * Return: Always 0
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	int len, n1, n2;

	len = 0;
	n1 = _strlen(s);
	n2 = _strlen(accept);

	for (i = 0; i < n1; i++)
	{
		for (j = 0; j < n2; j++)
		{
			while (s[i] == accept[j] && s[i] != '\0' && accept[j] != '\0')
			{
				len++;
			}
		}
	}
	return (len);
}
