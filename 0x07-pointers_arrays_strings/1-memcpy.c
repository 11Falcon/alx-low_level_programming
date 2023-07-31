#include "main.h"
/**
 * _memcpy - Entry code
 * @dest: input
 * @src: input
 * @n: input
 * Return: char
 */
char *_memcpy(char *dest, char *src, unsigned int n)
	{
		unsigned int i;

		i = 0;
		while (i < n)
		{
			dest[i] = src[i];
			i++;
		}
		return (dest);
	}
