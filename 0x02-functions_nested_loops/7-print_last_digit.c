#include "main.h"
#include "6-abs.c"
/**
 * print_last_digit - last digit
 * @s : input
 * Return: int
 */
int print_last_digit(int s)
{
	while(_abs(s) <10)
		s = s / 10;
	return (s);
}
