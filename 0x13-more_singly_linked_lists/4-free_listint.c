#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_listint - frees list
 * @head: takes pointer
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *tem;

	while (head)
	{
		tem = head->next;
		free(head);
		head = tem;
	}
}
