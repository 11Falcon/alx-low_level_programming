#include "main.h"
/**
 * _strncpy - Entry
 * @dest: input
 * @scr: input
 * @n: input
 * Return: char
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (src[i])
		i++;
	while (j < i)
	{
		dest[j] = src[j];
		j++;
	}
	dest[j] = '\0';
	Return (dest);
}
