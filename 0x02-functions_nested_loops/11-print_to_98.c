#include "main.h"
/**
 * print_to_98 - print all nutural numbers from inpu to 98
 * @n: the number to begin countingat
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
		printf("%d, ", n--);
		printf("%d\n", n);
	}
	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}
