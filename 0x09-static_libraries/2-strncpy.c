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
	int j = 0;

	while (j < n && src[j])
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}
	return (dest);
}
