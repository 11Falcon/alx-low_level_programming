#include <stdlib.h>
#include "lists.h"
#include <stddef.h>
/**
 * add_nodeint - add new element in the beginning
 * @head: old beginning
 * @n: int
 * Return: new head
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = *head;
	(*head) = new_node;
	return (*head);
}
