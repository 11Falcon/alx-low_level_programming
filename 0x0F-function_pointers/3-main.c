#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		printf("Error");
		exit(98);
	}
	if (!get_op_func(argv[3]))(atoi(argv[2]), atoi(argv[4]))
	{
		printf("Error");
		exit(99);
	}
	return (get_op_func(argv[3])(atoi(argv[2]), atoi(argv[4])));
}
