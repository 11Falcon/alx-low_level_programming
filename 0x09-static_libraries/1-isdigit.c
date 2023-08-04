#include "main.h"
#include <stdio.h>
/**
 * _isdigit - Entry code
 * @c: input
 *
 * Return: 1 if input is digit ,else 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
