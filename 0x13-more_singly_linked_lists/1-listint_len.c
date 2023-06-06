#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * listint_len - finds length
 * @h: takes pointer
 * Return: integer
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
