#include "main.h"
#include <stdio.h>
/**
 * _strcat - Entry code
 * @dest: input
 * @src: input
 * Return: char
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int end = sizeof(*dest);

	for (i = 0; i < sizeof(*src); i++)
	{
		if (*des[end - 1] != '\0'
			*dest[end - 1] = *src[i];
		end++;
	}
	*dest[sizeof(*dest)] = '\0';
}
