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

	while (i < n)
	{
		if (i % 10)
			_putchar(' ');
		if (!(i % 10) && i)
			{
				_putchar(b);
				_putchar(s[i]);
			}
		i++;
	}
	_putchar('\n');
}
