#include "main.h"
#include "3-islower.c"
/**
 * _isalpha - is alphabet or not
 * @c: ckecking if the input is an alphabet
 * Return:1 if is an alphabet and 0 if not
 */
int _isalpha(int c)
{
	if ((c >= 65) && (c <= 90))
		return (1);
	else
		return (_islower(c));
}
