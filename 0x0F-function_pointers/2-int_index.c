#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @array: input
 * @size: size if array
 * @cmp: function as input
 * Return: int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i])
				return (array[i]);
	}
}
