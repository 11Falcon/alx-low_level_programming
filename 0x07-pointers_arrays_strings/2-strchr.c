#include "main.h"
/**
 * strchr - Entry code
 * @s: input
 * @c: input
 * Return: char
 */
char *_strchr(char *s, char c) {
    while (*s != '\0') {
        if (*s == c) {
            return s; // Found the character, return the pointer to it
        }
        s++; // Move to the next character in the string
    }
    return NULL; // Character not found, return NULL
}
