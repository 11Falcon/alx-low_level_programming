#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * free_listint2 - freedom
 * @head: input
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (!head)
	{
		return;
	}
	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	*head = NULL;
}
