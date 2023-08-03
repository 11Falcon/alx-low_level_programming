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
	if(c != '\0')
	{
		_putchar('\n');
		return;
	}
	s++;
	_print_rev_recursion(s);
	_putchar(c);
}
