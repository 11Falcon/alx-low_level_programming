#include "main.h"
/**
 * _strlen_recursion - Entry code
 * @s: input
 * return: int
 */
int _strlen_recursion(char *s)
{
	char c = *s;
	if (!c)
		return (0);
	s++;
	return (1 + _strlen_recursion(s));
