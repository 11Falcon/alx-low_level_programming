#include "main.h"
/**
 * _strspn - Entry code
 * @s: input
 * @accept: input
 * Return: int
 */
unsigned int _strspn(char *s, char *accept)
{
	int count = 0;

	while (*s) 
	{
		while (*accept)
		{
			if (*s == *accept)
				{
					count++;
					accept++;
					break;
				}
			s++;
		}
		if (*accept == '\0')
			break;
	}
	return (count + 1);
}
