#include "main.h"
/**
 * _puts_recursion - Entry code
 * @s: input
 * Return: void
 */
void _puts_recursion(char *s)
{
	char c = *s;

	if (!c)
	{
		_putchar('\n');
		return;
	}
	_putchar(c);
	s++;
	_puts_recursion(s);
}
