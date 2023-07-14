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

	i = 97;
	while (i < 123)
	{
		s = i;
		if ((s != 'q') && (s != 'e'))
			putchar(s);
		i++;
	}
	putchar('\n');
	return (0);
}
