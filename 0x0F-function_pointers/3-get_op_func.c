#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
int (*get_op_func(char *s))(int, int){

	op_t ops[] = {
        	{"+", op_add},
        	{"-", op_sub},
        	{"*", op_mul},
        	{"/", op_div},
        	{"%", op_mod},
        	{NULL, NULL}
	};
    	int i;
	while (i < 6)
		if ( op_t[i][0] == s)
			op_t[i][1];
}

