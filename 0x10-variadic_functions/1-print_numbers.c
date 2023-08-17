#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_numbers - Entry code
 * @separator: input
 * @n: input
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list np;
	unsigned int i = 0;

	if (separator == NULL)
		return;
	va_start(np, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(np, int));
		if (!(i == (n - 1)))
			printf("%s", separator);
	}
	printf("\n");
	va_end(np);
}

