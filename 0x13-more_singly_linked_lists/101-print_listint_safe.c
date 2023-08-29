#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
 * print_listint_safe - printing all the linked list
 * @head: our linked list
 * Return: size_t
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *list = head;
	size_t count = 0;

	if (!head)
		return (98);
	while (list)
	{
		count++;
		if (list <= list->next)
		{
			printf("[%p] %u\n", (void *)list, list->n);
			break;
		}
		printf("[%p] %d\n", (void *)list, list->n);
		list = list->next;
	}
	return (count);
}
