#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * add_nodeint_end - add new node to the end
 * @head: ptr of our linked list
 * @n: int
 * Return: listint_t ptr of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_element = malloc(sizeof(listint_t));
	listint_t *temp = *head;

	if (!new_element)
		return (NULL);
	new_element->n = n;
	new_element->next = NULL;
	if (*head == NULL)
	{
		*head = new_element;
		return (new_element);
	}
	while (temp->next)
	{
		temp = temp->next;
	}
	temp->next = new_element;
	return (new_element);
}
