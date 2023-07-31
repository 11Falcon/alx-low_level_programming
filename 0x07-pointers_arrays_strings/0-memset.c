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
	int i = 0;
	char falcon = *s;

	while (i < n)
	{
		if (i % 10)
			falcon += ' ');
		if (!(i % 10) && i)
			{
				falcon += b;
				falcon += s[i]);
			}
		i++;
	}
	falcon += '\n';
	return (s);
}
