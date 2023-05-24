#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - iterates an array
 * @array: takes pointer
 * @size: takes size
 * @action: takes function pointer
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i;

	if (action != NULL && array != NULL)
	{
		for (i = 0; i < size; i++)
		{
			(*action)(array[i]);
		}
	}
}
