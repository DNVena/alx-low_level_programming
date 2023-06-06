#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_listint - prints elements
 * @h: takes pointer
 * Return: integer
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
