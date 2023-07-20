#include "main.h"
#include <stdio.h>
/**
 * _isupper - Entry point
 * @c : input
 * Return : 1 if c is upper ,else 0
 */
int _isupper(int c)
{
	int i;

	i = c;
	if (i >= 65 && i <= 90)
		return (1);
	else
		return (0);
}
