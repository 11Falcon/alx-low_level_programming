#include "main.h"
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: void
 */
void print_alphabet(void)
{
	int i = 97;
	char c;

	while (i < 123)
	{
		c = i;
		_putchar(c);
		i++;
	}
	_putchar('\n');
}
