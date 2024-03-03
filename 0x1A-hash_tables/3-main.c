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

    ht = hash_table_create(1024);
    test1 = hash_table_set(ht, "betty", "cool");
    printf("%s\n", test1);
    test2 = hash_table_set(ht, "hetairas" , "");
    printf("%s\n", test2);
    test3 = hash_table_set(ht, "mentioner", "falcon");

    test4 = hash_table_set(ht, "dram", "vivency");
    printf("%s\n", test4);
    test5 = hash_table_set(ht, "vivency", "dram");
    printf("%s\n", test5);
    test6 = hash_table_set(ht, "stylist", "subgenera");
    printf("%s\n", test6);
    
    test7 =hash_table_set(ht, "subgenera", "stylist");
    printf("%s\n", test7);
    test8 = hash_table_set(NULL, "", "");
    printf("%s\n", test8);
    return (EXIT_SUCCESS);
}
