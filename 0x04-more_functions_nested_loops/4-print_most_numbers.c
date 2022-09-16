#include "main.h"
/**
 * print_most_numbers - print 0 - 9 except 2, 4
 * Description: prints
 * Return: void
 */
void print_most_numbers(void)
{
	int a = 0;

	while (a <= 9)
	{
		if (a != 2 && a != 4)
		{
			_putcher(a + '0');
		}
		a++;
	}
	_putchar('\n');
}
