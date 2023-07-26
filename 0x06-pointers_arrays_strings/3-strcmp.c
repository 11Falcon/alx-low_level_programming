#include "main.h"
/**
 * _strcmp
 * @s1: input
 * @s2: input
 * Return: int
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int len = 0;

	while (s1[i] == s2[i])
		i++;
	while (S1[len])
		len++;
	if (i == len)
		return (1);
	else
		return (0);
}
