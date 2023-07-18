#include "main.h"
/**
 * print_sign - return the sign the number
 * @c : checking the sign of the input
 * return: 1 if positive and 0 if zero if not then -1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		return (-1);
		_putchar('-');
	}
}
