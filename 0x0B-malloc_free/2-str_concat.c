#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _len - finds string length
 * @str: takes char pointer
 * Return: int
 */
int _len(char *str)
{
	int i;

	while (*str != '\0')
	{
		i++;
		str++;
	}
	return (i);
}

/**
 * str_concat - adds to strings
 * @s1: takes pointer
 * @s2: takes pointer
 * Return: pointer
 */
char *str_concat(char *s1, char *s2)
{
	char *arr;
	unsigned long int len1, len2, sum_len, i, j;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	len1 = _len(s1);
	len2 = _len(s2);
	sum_len = len1 + len2;
	arr = malloc((sizeof(char) * sum_len));
	if (arr == NULL)
	{
		return (NULL);
	}
	for (j = 0; *s1 != '\0'; j++)
	{
		arr[j] = *s1;
		s1++;
	}
	for (i = len1; *s2 != '\0'; i++)
	{
		arr[i] = *s2;
		s2++;
	}
	return (arr);
}
