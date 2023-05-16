#include "main.h"
#include <stdlib.h>
#include <stdio.h>

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
 * _strdup - duplicates string
 * @str: takes pointer
 * Return: pointer
 */
char *_strdup(char *str)
{
	char *arr;
	unsigned long int len, j;

	if (str == NULL)
	{
		return (NULL);
	}
	len = _len(str);
	arr = malloc((sizeof(char) * len) + 1);
	if (arr == NULL)
	{
		return (NULL);
	}
	for (j = 0; *str != '\0'; j++)
	{
		arr[j] = *str;
		str++;
	}
	return (arr);
}
