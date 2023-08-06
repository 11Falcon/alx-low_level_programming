#include <stdio.h>
/**
 * main - Entry code
 * @argc: input
 * @argv: input
 * Return: int
 */
int main( int argc, char *argv[])
{
	printf("%d\n",argc - 1);
	(void)*argv;
	return (0);
}
