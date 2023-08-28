#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * pop_listint - remove the first node
 * @head: input
 * Return: int
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int l;

	if (!*head)
		return (0);
	temp = (*head)->next;
	l = (*head)->n;
	free(*head);
	(*head) = temp;
	return (l);
}
