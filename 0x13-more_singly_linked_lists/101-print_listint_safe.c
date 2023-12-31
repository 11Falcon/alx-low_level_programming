#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
/**
 * print_listint_safe - Print a listint_t linked list.
 * @head: Pointer to the head of the linked list.
 * Return: Number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *slow = head;
	const listint_t *fast = head;
	size_t count = 0;

	while (fast != NULL && fast->next != NULL)
	{
		printf("[%p] %d\n", (void *)slow, slow->n);
		count++;
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
		{
			printf("-> [%p] %d\n", (void *)fast, fast->n);
			break;
		}
	}
	if (fast == NULL || fast->next == NULL)
	{
		while (slow != NULL)
		{
			printf("[%p] %d\n", (void *)slow, slow->n);
			count++;
			slow = slow->next;
		}
	}
	return (count);
}

