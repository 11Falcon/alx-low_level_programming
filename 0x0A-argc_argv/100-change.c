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
	int result = 0;
	int rest = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	rest = atoi(argv[1]);
	while (rest != 0)
	{
		if (rest >= 25)
		{
			rest -= 25;
			result += 1;
		}
		else if (rest >= 10)
		{
			rest -= 10;
			result += 1;
		}
		else if (rest >= 5)
		{
			rest -= 5;
			result += 1;
		}
		else if (rest >= 2)
		{
			rest -= 2;
			result += 1;
		}
		else if (rest >= 1)
		{
			rest -= 1;
			result += 1;
		}
	}
	printf("%d\n", result);
	return (0);
}
