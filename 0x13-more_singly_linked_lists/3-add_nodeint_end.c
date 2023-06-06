#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * add_nodeint_end - adds node to list
 * @head: takes pointer to pointer
 * @n: takes integer
 * Return: pointer
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *tem = *head;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (tem->next)
	{
		tem = tem->next;
	}
	tem->next = new;
	return (new);
}
