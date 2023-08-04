#include "main.h"
/**
 * _memset - Entry code
 * @s: input
 * @b: input
 * @n: input
 * Return: char
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
