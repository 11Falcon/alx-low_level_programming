#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * delete_nodeint_at_index - deleting and indexed node
 * @head: our linked list
 * @index: the index of the deleted node
 * Return: int
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *list, *temp;
	unsigned int i = 0;

	if (!head || !(*head))
		return (-1);
	list = *head;
	if (index == 0)
	{
		temp = (*head)->next;
		free(list);
		*head = temp;
		return (1);
	}
	while ((index - 1) != i)
	{
		list = list->next;
		if (!list)
			return (-1);
		i++;
	}
	temp = list->next;
	list->next = list->next->next;
	free(temp);
	return (1);
}
