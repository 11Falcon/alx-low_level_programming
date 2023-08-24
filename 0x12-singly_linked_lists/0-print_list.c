#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_list - Entry code
 * @h: input
 * Return: size_t
 */
size_t print_list(const list_t *h)
{
	size_t i;

	i = 0;
	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			h = h->next;
			i++;
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
			h = h->next;
			i++;
		}
	}
	return (i);
}


