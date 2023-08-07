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
	unsigned int s;

	i = (char *)malloc(size * sizeof(char));
	(void)c;
	if (size == 0)
	{
		return (NULL);
	}
	if (i == NULL)
	{
		fprintf(stderr,"Failed to allocate memory\n");
		return (NULL);
	}
		for (s = 0;s < size; s++)
		{
			i[s] = c;
		}

	return (i);
}
