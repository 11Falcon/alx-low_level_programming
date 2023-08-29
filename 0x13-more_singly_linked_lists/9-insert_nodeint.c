#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *linked = *head;
	listint_t *new_node = malloc(sizeof(listint_t));
	unsigned int i = 0;

	new_node->n = n;
	while ((idx - 1) != i)
	{
		linked = linked->next;
		if (!linked)
			return (NULL);
		i++;
	}
	new_node->next =linked->next;
	linked->next = new_node;
	return (new_node);
}
