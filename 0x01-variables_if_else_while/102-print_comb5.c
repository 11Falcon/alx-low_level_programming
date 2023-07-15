#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Alyaws 0(Success)
 */
int main(void)
{
	int i, s, l;
	int j, d, m;

	for (i = 0; i <= 99; i++)
	{
		for (j = i; j <= 99; j++)
		{
			s = i % 10;
			d = i - s;
			d = d / 10;
			putchar(s + '0');
			putchar(d + '0');
			putchar(' ');
			l = j % 10;
			m = j - l;
			m = m / 10;
			putchar(l + '0');
			putchar(m + '0');
			if (!((i == 98) && (j == 99)))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
