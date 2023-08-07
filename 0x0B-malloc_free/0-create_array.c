#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - Entry code
 * @size: input
 * @c: input
 * Return: int
 */
char *create_array(unsigned int size, char c)
{
	char *i;

	i = (char *)malloc(size * sizeof(c));
	if (sizeof(i)  == 0)
	{
		printf("failed to allocate memory");
		return (0);
	}
	return (i);
}
