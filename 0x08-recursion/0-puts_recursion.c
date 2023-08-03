#include "main.h"
/**
 * _puts_recursion - Entry code
 * @s: input
 * Return: void
 */
void _puts_recursion(char *s)
{
	int i = 0;
	char c = *s;

	if(!c)
		return;
	_puts_recursion(s++);
	_putchar(c);
}
			
