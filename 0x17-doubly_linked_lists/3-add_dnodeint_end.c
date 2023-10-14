#include "lists.h"
/**
 * add_dnodeint_end - adding a node to the end
 * @head: node
 * @n: int
 * Return: new list
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *end = *head;

	if (!head)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (!*head)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}
	while (end->next != NULL)
		end = end->next;
	new->prev = end;
	end->next = new;
	return (new);
}
