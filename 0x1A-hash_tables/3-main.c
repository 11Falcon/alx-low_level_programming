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
    hash_table_set(ht, "betty", "cool");
    hash_table_set(ht, "hetairas" , "");
    hash_table_set(ht, "mentioner", "falcon");
    hash_table_set(ht, "dram", "vivency");
    hash_table_set(ht, "vivency", "dram");
    hash_table_set(ht, "stylist", "subgenera");
    hash_table_set(ht, "subgenera", "stylist");
    hash_table_set(ht, "", "");
    return (EXIT_SUCCESS);
}
