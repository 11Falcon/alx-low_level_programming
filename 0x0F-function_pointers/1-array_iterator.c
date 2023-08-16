#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"
#define size_t sizeof(int);
/**
 * array_iterator - Entry code
 * @array: input
 * @size: input
 * @action: input
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i = 0;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
