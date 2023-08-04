#include "main.h"
#include <stdio.h>
/**
 * _strcmp - Entry code
 * @s1: input
 * @s2: input
 * Return: int
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int len = 0;
	int s = 0;
	int lim;

	while (s2[s])
		s++;
	while (s1[len])
		len++;
	if (s < len)
		lim = s;
	else
		lim = len;
	while (i < lim && (s1[i] == s2[i]))
		i++;
	return (s1[i] - s2[i]);
}
