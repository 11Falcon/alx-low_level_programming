#include <stdio.h>
/**
 * main -Entry point
 *
 * Return: Always 0(Success)
 */
int main(void)
{
	int i;
	char c;

	for (i = 0; i <= 9; i++)
	{
		putchar(i + '0');
	}
	for (i = 97; i <= 102; i++)
	{
		c = i;
		putchar(c);
	}
	putchar('\n');
	return (0);
}
