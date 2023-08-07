#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - Entry code
 * @str: input
 * Return: cahr
 */
char *_strdup(char *str)
{
	int i = 0;
	char *c = (char *)malloc(sizeof(strlen(str)) * sizeof(char));

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i])
	{
		c[i] = str[i];
		i++;
	}
	return (c);
}
