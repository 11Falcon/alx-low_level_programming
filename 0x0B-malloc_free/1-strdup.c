#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - Entry code
 * @str: input
 * Return: cahr
 */
char *_strdup(char *str)
{
	long unsigned int i;
	char *c = (char *)malloc(sizeof(*str));

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < sizeof(*str); i++)
	{
		c[i] = str[i];
	}
	return (c);
}
