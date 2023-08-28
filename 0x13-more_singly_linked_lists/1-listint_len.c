#include "lists.h"
#include <stddef.h>
/**
 * listint_len - The length of a linked list
 * @h: liked list
 * Return: length
 */
size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	while (h)
	{
		h = h->next;
		len++;
	}
	return (len);
}
