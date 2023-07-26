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

	while (s2[s])
		s++;
	while (s1[len])
		len++;
	while (i < max(len,s))
		sum += int(s1[i]) - int(s2[i];
	return (sum);
}
