#include "main.h"
/**
 * _strncpy - Entry
 * @dest: input
 * @src: input
 * @n: input
 * Return: char
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (src[i])
		i++;
	while (j < n)
	{
		dest[j] = src[j];
		j++;
	}
	dest[j] = '\0';
	return (dest);
}
