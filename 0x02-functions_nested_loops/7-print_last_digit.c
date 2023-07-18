#include "main.h"
#include "6-abs.c"
/**
 * print_last_digit - last digit
 * @s : input
 * Return: int
 */
int print_last_digit(int s)
{
	int l;

	last= s % 10;
	if (l < 0)
		l = l * -1;
	_putchar(l + '0');
	return (l);
}
