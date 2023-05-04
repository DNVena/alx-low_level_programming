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
 * _strcmp - compares 2 strings
 * @s1: takes character pointer
 * @s2: takes character pointer
 * Return: Always 0
 */
int _strcmp(char *s1, char *s2)
{
	int sum1 = 0;
	int len1;
	int i;
	int sum2 = 0;
	int j;
	int len2;
	int diff;

	len1 = _strlen(s1);
	len2 = _strlen(s2);

	for (i = 0; i < len1; i++)
	{
		sum1 = sum1 + s1[i];
	}
	for (j = 0; j < len2; j++)
	{
		sum2 = sum2 + s2[j];
	}
	diff = sum1 - sum2;
	return (diff);
}
