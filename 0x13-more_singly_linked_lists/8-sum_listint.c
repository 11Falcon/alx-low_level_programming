#include "lists.h"
#include <stddef.h>
/**
 * sum_listint - sum of linked_list
 * @head: our linked list
 * Return: int that is the sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *linked_list = head;

	if (!linked_list)
		return (0);
	while (linked_list)
	{
		sum += linked_list->n;
		linked_list = linked_list->next;
	}
	return (sum);
}
