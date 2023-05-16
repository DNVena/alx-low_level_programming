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

	arr = malloc(sizeof(char) * size);
	if (sizeof(arr == 0)
	{
		printf("failed to allocate memory");
		return (NULL);
	}
	else
	{
		unsigned long int i;

		for (i = 0; i < sizeof(arr); i++)
		{
			arr[i] = c;
			i++;
		}
	}
	return (arr);
}
