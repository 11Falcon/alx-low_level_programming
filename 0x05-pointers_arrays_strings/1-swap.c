#include "main.h"
/**
 * swap_int - The function
 * @a: input a 
 * b: input b
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int c;
	
	c = *b;
	*b = *a;
	*a = c;
}
