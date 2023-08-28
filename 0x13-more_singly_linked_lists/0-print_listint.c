#include <stddef.h>
#include "lists.h"
#include <stdio.h>
/**
 * print_listint - printing a linked list elements
 * @h: pointer of the list
 * Return: number of node
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *list = h;
	size_t number_of_node = 0;

	while (list)
	{
		printf("%d\n", list->n);
		list = list->next;
		number_of_node += 1;
	}
	return (number_of_node);
}
