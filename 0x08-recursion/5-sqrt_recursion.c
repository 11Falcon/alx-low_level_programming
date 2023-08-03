#include "main.h"
/**
 * _sqrt_recursion - Entry code
 * @n: input
 * Return: int
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if ((n == 1) || (n == 0))
		return (n);
	int root = _sqrt_recursion(n - 1);
	if (root * root <= n)
		return (root);
	return (_sqrt_recursion(n - 1));
}
