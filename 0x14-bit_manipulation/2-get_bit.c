#include "main.h"
/**
 * get_bit - get bit in index
 * @n: input
 * @index: input
 * Return: int
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	if (n & (1 << index))
		return (1);
	else
		return (0);
}
