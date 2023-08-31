#include "main.h"
/**
 * clear_bit - set it to 0
 * @n: input
 * @index: input
 * Return: int
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	*n &= ~(1UL << index);
	return (1);
}
