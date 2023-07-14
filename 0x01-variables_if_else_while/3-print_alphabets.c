#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0(Success)
 */
int main(void)
{
	int i;
	char c;

	i = 97;
	while (i < 123){
		c = i;
		puts(c);
		i++;
	}
	i = 65;
	while (i < 90){
		c=i;
		puts(c);
		i++;
	}
	puts("");
}
