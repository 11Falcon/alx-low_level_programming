#include "main.h"
/**
 * strchr - Entry code
 * @s: input
 * @c: input
 * Return: char
 */
char *_strchr(char *s, char c)
{
	if (c[0])
		s = c[0];
	else
		s = NULL;
	return (s);
}
