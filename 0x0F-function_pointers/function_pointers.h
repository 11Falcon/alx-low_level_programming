#ifndef FALCON
#define FALCON
#include <stddef.h>
int (*get_op_func(char *s))(int, int);
int _putchar(char);
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));

#endif
