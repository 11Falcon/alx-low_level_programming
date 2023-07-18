#include "main.h"
/**
 * print_sign - Print the sign the number
 * @n : checking the sign of the input
 * Return: 1 if positive and 0 if zero if not then -1
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
		_putchar('-');
		return (-1);
	}
}
