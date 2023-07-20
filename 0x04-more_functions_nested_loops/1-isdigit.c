#include <main.h>
#include <stdio.h>
#include <ctype.h>
/**
 * _isdigit - Entry code
 * @c: input
 *
 * Return: 1 if input is digit ,else 0
 */
int _isdigit(int c)
{
	return isdigit(c) != 0 ? 1 : 0;
}
