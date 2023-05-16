#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - creates an array
 * @size: takes unsigned int
 * @c: takes char
 * Return: pointer
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned long int i = 0;

	arr = malloc(sizeof(char) * size);
	if (size == 0)
	{
		return (NULL);
	}
	while (i < (sizeof(char) * size))
	{
		arr[i] = c;
		i++;
	}
	return (arr);
}
