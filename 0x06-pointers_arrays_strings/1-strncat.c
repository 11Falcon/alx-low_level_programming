#include "main.h"
#include "string.h"
/**
 * _strncat - Entry code
 * @dest: input
 * @src: input
 * @n: int
 * Return: char
 */
char *_strncat(char *dest, char *src, int n)
{
	int end;
	int i;

	for (i = 0; i < n; i++)
	{
		dest[end] = src[i];
		end++;
	}
	dest[strlen(dest)] = '\0';
	return (dest);
}
