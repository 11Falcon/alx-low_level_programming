#include "main.h"
#include <string.h>
/**
 * reverse_array - Entry code
 * @a: input
 * @n: input
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int j = n;
	int s[n];

	strcpy(s, a)
	while (i < n)
	{
		s[i] = a[j];
		i++;
		j--;
	}
}
