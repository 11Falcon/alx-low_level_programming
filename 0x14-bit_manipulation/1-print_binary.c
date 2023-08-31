#include "main.h"
#include <stdio.h>
void print_binary(unsigned long int n)
{
	int len = 0;
	unsigned long int u = n;
	int i;

	while (u > 1)
	{
		len ++;
		u /= 2;
	}
	u = 1;
	for (i = len; i >= 0; i--)
	{
		int j = i;
		unsigned long int po = 1;

		while (j >= 0)
		{
			po *= 2;
			j--;
		}
		if (po < n)
		{
			printf("1");
			n = n - po;
		}
		else
			printf("0");
	}
	printf("\n");
}
