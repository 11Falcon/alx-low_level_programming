#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * print_name - Function name
 * @name: char input
 * @f: function input
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
