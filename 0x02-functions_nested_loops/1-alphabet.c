#include "main.h"
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0(Success)
 */
int main(void)
{
	int i = 97;
	char c;

	while (i < 123)
	{
		c = i;
		_putchar(c);
	}
	_putchar('\n');
	return (0);
}
