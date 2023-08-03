#include "main.h"
/**
 * _strlen_recursion - Entry code
 * @s: input
 * return: int
 */
int _strlen_recursion(char *s)
{
	char c = *s;
	int sum = 0;

	if (!c)
		return (sum);
	sum += 1;
	s++;
	_strlen_recursion(s);
}
