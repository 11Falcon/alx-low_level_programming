#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - Entry code
 * @b: input
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	int *c =malloc(sizeof(b));
	if( c == NULL)
		exit(98);
}
