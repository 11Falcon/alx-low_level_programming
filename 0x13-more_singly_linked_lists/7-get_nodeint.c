#include "lists.h"
#include <stddef.h>
/**
 * get_nodeint_at_index - get the n_th node
 * @head: linked list
 * @index: the index of the requested node
 * Return: listint_t;
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *search = head;
	unsigned int i = 1;

	while (i != index)
	{
		search = search->next;
		if (!search)
			return (NULL);
		i++;
	}
	return (search);
}
