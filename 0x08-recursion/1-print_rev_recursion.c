#include "main.h"
/**
 * _print_rev_recursion - Entry code
 * @s: input
 * return: void
 */
void _print_rev_recursion(char *s)
{
	char c;

	c = *s;
	if(!c)
	{
		_putchar('\n');
		return;
	}
	_print_rev_recursion(s);
	s++;
	_putchar(c);
}
