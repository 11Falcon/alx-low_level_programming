#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0(Success)
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
int main(void)
{
	_putchar("_putchar");
	return (0);
}
