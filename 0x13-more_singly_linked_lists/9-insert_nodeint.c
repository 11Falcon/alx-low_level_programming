#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * insert_nodeint_at_index - inserting a new node in the idx position
 * @head: our linked list
 * @idx: the index to insert in
 * @n: the value of the node
 * Return: the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *linked = *head;
	listint_t *new_node = malloc(sizeof(listint_t));
	unsigned int i = 0;

	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	if (!linked)
	{
		linked->next = NULL;
		linked = new_node;
		return (new_node);
	}
	while ((idx - 1) != i)
	{
		linked = linked->next;
		if (!linked)
			return (NULL);
		i++;
	}
	if (linked->next == NULL)
		new_node->next = NULL;
	else
		new_node->next = linked->next;
	linked->next = new_node;
	return (new_node);
}
