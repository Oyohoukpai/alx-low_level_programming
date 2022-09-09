#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Description: prints if a number is positive or nagetive.
 * Return: 0 made me do
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
  	printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is nagetive\n", n);
	}
	return (0);
}
