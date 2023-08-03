#include "main.h"
/**
 * is_prime_number - Entry code
 * @n: input
 * Return: int
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (is_devided(n, n-1));
}

/**
 * is_divided - Entry code
 * @x: input
 * @:dev: input
 * Return: int
 */
int is_devided(int x ,int dev)
{
	if (div <= 1)
		return (0);
	if (div == 2)
		return (n % 2 == 0 ? 1 : 0);
	if (n % div == 0)
		return (1);
	return ( is_devided(n, dev -1));
}
