#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strcat - Entry code
 * @dest: input
 * @src: input
 * Return: char
 */
char *_strcat(char *dest, char *src)
{
	size_t i;
	int end = strlen(dest);

	for (i = 0; i < strlen(src); i++)
	{
		dest[end] = src[i];
		end++;
	}
	dest[strlen(dest)] = '\0';
	return (dest);
}
