#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * sum_listint(listint_t *head)
 * @head: pointer
 * Return: integer
 */
int sum_listint(listint_t *head)
{
	listint_t *tem = head;
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}

	while (tem)
	{
		sum += tem->n;
		tem = tem->next;
	}
	return (sum);
}
