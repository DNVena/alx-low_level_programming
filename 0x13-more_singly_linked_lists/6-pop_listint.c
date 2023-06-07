#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * pop_listint - deletes element
 * @head: takes pointer to pointer
 * Return: integer
 */
int pop_listint(listint_t **head)
{
	listint_t *tem;
	int count;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}
	count = (*head)->n;
	tem = (*head)->next;
	free(*head);
	*head = tem;
	return (count);
}
