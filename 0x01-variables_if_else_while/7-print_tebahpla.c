#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0(success)
 */
int main(void){
	int i;
	char c;

	i = 122;
	for (i = 122;i > 97;i--)
	{
		c = i;
		putchar(c);
	}
	putchar('\n');
	return (0);
}

