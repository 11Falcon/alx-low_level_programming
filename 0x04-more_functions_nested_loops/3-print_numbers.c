#include "main.h"
#include "_putchar.c"
#include <stdio.h>
/**
 * print_numbers - Entry point
 *
 * Return: void
 */
void print_numbers(void)
{
	int i;

	i = 0;
	while (i < 10)
	{
		_putchar(i);
	}
	_putchar('\n');
}
