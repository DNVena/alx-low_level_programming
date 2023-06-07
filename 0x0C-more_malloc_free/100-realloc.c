#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates memory
 * @ptr: takes pointer
 * @old_size: takes unsigned integer
 * @new_size: takes unsigned integer
 * Return: void
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i, j;
	char *_ptr;
	char *old_ptr;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		return (malloc(new_size));
	}
	_ptr = malloc(new_size);
	if (_ptr == NULL)
	{
		return (NULL);
	}
	old_ptr = ptr;
	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
		{
			_ptr[i] = old_ptr[i];
		}
	}
	if (new_size > old_size)
	{
		for (j = 0; j < old_size; j++)
		{
			_ptr[j] = old_ptr[j];
		}
	}
	free(ptr);
	return (_ptr);
}
