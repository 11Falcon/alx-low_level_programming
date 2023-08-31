#include "main.h"

/**
 * flip_bits - Calculates the number of bits to flip to get from n to m.
 * @n: First unsigned long integer.
 * @m: Second unsigned long integer.
 * Return: Number of bits to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int r = n ^ m;

	while (r > 0)
	{
		count += r & 1;
		r >>= 1;
	}
	return (count);
}
