#include "main.h"
/**
 * factorial - Entry code
 * @n: input
 * Return: int
 */
int factorial(int n)
{
	if (n <= 0)
		return (1);
	return (n * factorial(n - 1));
}
