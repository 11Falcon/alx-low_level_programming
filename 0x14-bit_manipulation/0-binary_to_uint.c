#include "main.h"
/**
 * binary_to_uint - Clear
 * @b: pointer of char
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int number = 0;
	unsigned int c = 1;
	int cov, i, len;

	if (!b)
		return (0);
	len = 0;
	while (b[len])
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
		len++;
	}
	for (i = len - 1; i >= 0; i--)
	{
		cov = b[i] - '0';
		number += cov * c;
		c = c * 2;
	}
	return (number);
}
