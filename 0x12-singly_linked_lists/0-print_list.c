#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_list - prints a list
 * @h: takes pointer
 * Return: size_t
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;
		count++;
	}
	return (count);
}

