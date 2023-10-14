#include "lists.h"
/**
 * dlistint_len - the length
 * @h: the d-l-list
 * Return: len
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
