#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry code
 * @argc: input
 * @argv: input
 * Return: int
 */
int main(int argc, char *argv[])
{
	int result = 1;
	int i = 1;

	if (argc == 3)
	{
		for (i = 1; i < argc ; i++)
		{
			result *= atoi(argv[i]);
		}
		printf("%d\n", result);
		return (0);
	}
	else
		{
			printf("Error\n");
			return (1);
		}
}
