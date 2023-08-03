#include "main.h"
/**
 * _puts_recursion - Entry code
 * @s: input
 * Return: void
 */
void _puts_recursion(char *s)
{
	int i = 0;

	if(!*s[i])
		return;
	return (_puts_recursion(*s++);
}
			
