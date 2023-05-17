#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * alloc_grid - creates 2d array
 * @width: takes int
 * @height: takes int
 * Return: int
 */
int **alloc_grid(int width, int height)
{
	int i, j, k;

	int **arr = (int **)malloc(height * sizeof(int *));

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	if (arr == NULL)
	{
		for (i = 0; i < height; i++)
		{
			free(arr[i]);
		}
		free(arr);
	}
	for (k = 0; k < height; k++)
	{
		arr[k] = (int *)malloc(width * sizeof(int));
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			arr[i][j] = 0;
		}
	}
	return (arr);
}
