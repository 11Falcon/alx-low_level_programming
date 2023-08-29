#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * free_listint_safe - free a list
 * @h: our linked list
 * Return : size_t
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *list = *h;
	listint_t *temp;

	while (list)
	{
		temp = list->next;
		free(list);
		list = temp;
		count++;
	}
	*h = NULL;
	return (count);
}
