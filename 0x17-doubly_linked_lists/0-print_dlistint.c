#include "lists.h"
/**
 * print_dlistint - printing the list
 * @h: the list
 * Return: size_t
 */

size_t print_dlistint(const dlistint_t *h)
{
	dlistint_t *image = h;
	size_t count = 0;
;
	while (image)
	{
		printf("%s", image->n);
		image = image->next;
		count++;
	}
	return (count);
}

