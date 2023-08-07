#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - Entry code
 * @size: input
 * @c: input
 * Return: int
 */
int *create_array(unsigned int size, char c)
{
	int *i;

	i = (int *)malloc(size * sizeof(c));
	if (i == NULL)
	{
		return (0);
	}
	return (i);
}
