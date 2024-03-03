#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht;

    int test1, test2, test3, test4, test5, test6, test7;

    ht = hash_table_create(1024);
    test1 = hash_table_set(ht, "betty", "cool");
    printf("%d\n", test1);
    test2 = hash_table_set(ht, "hetairas" , "");
    printf("%d\n", test2);
    test3 = hash_table_set(ht, "mentioner", "falcon");
    printf("%d\n", test3);

    test4 = hash_table_set(ht, "dram", "vivency");
    printf("%d\n", test4);
    test5 = hash_table_set(ht, "vivency", "dram");
    printf("%d\n", test5);
    test6 = hash_table_set(ht, "stylist", "subgenera");
    printf("%d\n", test6);
    
    test7 =hash_table_set(ht, "subgenera", "stylist");
    printf("%d\n", test7);
    return (EXIT_SUCCESS);
}
