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

	i = 0;
	end = 0;
	while (dest[end])
		end++;
	while (i < n && dest[i])
	{
		dest[end] = src[i];
		end++;
		i++;
	}
	dest[end] = '\0';
	return (dest);
}
