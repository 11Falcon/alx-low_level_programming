#include "main.h"
#include "1-alphabet.c"
/**
 * print_alphabet_x10 - print alphabets x 10
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		print_alphabet();
	}
}
