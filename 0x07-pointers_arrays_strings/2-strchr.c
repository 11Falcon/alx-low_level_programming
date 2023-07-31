#include "main.h"
#include <stddef.h>
/**
 * _strchr - Entry code
 * @s: input
 * @c: input
 * Return: char
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
