#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * size_t - Entry code
 * @h: input
 * Return: size_t
 */
size_t list_len(const list_t *h)
{
	size_t i;

	i = 0;
	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
