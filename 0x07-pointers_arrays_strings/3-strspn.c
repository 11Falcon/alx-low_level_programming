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
	int fa;

	i = 0;
	j = 0;
	fa = 1;
	while ( s[i] && (fa == 1)) 
	{
		while ( accept[j])
		{
			if ( s[i] == accept[j])
				{
					i++;
					break;
				}
			else
				fa = 0;
			j++;
		}
	}
	return (i);
}
