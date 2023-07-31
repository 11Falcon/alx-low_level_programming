#include "main.h"
/**
 * _strspn - Entry code
 * @s: input
 * @accept: input
 * Return: int
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	bool fa;

	i = 0;
	j = 0;
	fa = true;
	while ( s[i] && fa)
	{
		while ( accept[j])
		{
			if ( s[i] == accept[j])
				{
					i++;
					break;
				}
			else
				fa = false;
		}
	}
	return (i);
}
