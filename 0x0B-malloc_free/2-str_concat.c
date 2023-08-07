#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - Entry code
 * @s1: input
 * @s2: input
 * Return: char
 */
char *str_concat(char *s1, char *s2)
{
	char *ret;
	int i = 0;
	int count1 = 0;
	int count2 = 0;

	while(s1[count1])
		count1++;
	while(s2[count2])
	{
		count2++;
	}
	ret = (char*)malloc(sizeof(char) * (count + 1));
	if (ret == NULL)
		return (0);
	for (i = 0; i < count1; i++)
	{
		*(ret + i) = *(s1 + i);
	}
	for (i = 0; i < count2; i++)
		*(ret + count1 + i) = *(s2 +i);
	return (ret);
}
