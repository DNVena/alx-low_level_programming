#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_listint2 - frees list
 * @head: takes pointer to pointer
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *tem;

	if (head == NULL)
	{
		return;
	}
	while (*head)
	{
		tem = (*head)->next;
		free(*head);
		*head = tem;
	}
	*head = NULL;
}
