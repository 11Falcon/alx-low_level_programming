#include <stdlib.h>
#include <time.h>
/**
 * main 
 *
 * Return : always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n=rand()-RAND_MAX /2;
	if(n>0)
		printf("%d is positive\n", n);
	if(n==0)
		puts("%d is zero\n", n);
	if(n<0)
		printf("%d is negative\n", n);
	return (0);
}
