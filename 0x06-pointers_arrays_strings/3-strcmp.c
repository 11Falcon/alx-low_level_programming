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
	int s =0;
	int sum = 0;
	int c,d;

	while (s2[s])
		s++;
	while (s1[len])
		len++;
	while (i < max(len,s))
	{
		c = s1[i];
		d = s2[i];
		sum += c - d;
	}
	return (sum);
}
