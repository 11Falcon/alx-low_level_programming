#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * free_listint - Free the linked list
 * @head: our linked list
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
