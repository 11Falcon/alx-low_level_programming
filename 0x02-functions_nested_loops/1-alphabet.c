#include "main.h"
#include <stdio.h>
/**
 * print_alphabet - make the alphabets
 *
 * Return: void
 */
void print_alphabet(void)
{
  /* printing alphabets */

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
