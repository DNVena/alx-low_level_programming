#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * list_len - finds length
 * @h: takes pointer
 * Return: size_t
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
