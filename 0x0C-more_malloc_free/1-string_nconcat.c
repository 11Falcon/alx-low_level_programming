#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - Entry code
 * @s1: input
 * @s2: input
 * @n: input
 * Return: char
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *pointer;
	unsigned int i = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	pointer = malloc(sizeof(s1) + n);
	if (pointer ==NULL)
		return (pointer);
	while (i < sizeof(s1) - 1)
	{
		pointer[i] = s1[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		pointer[sizeof(s1) + i] = s2[i];
		i++;
	}
	return (pointer);
}
