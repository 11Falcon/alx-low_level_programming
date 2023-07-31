#include "main.h"
#include <stdio.h>
/**
 * _strchr - Entry code
 * @s: input
 * @c: input
 * Return: char
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (0);
}
