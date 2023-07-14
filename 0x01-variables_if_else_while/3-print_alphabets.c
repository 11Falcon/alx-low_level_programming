#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0(Success)
 */
int main(void)
{
	int i;
	char c;

	i = 97;
	while (i < 123)
	{
		c = i;
		putchar(c);
		i++;
	}
	i = 65;
	while (i < 91)
	{
		c = i;
		putchar(c);
		i++;
	}
	putchar('\n');
	return (0);
}
