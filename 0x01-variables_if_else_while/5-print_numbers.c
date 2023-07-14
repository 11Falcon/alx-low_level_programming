#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0(Success)
 */
int main(void)
{
	int i;
	char s;

	i = 48;
	while (i < 58)
	{
		s = i;
		putchar(s);
		i++;
	}
	putchar('\n');
	return (0);
}
