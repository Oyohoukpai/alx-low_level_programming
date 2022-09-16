#include "main.h"
/**
 * print_triangle - check for a digit
 * @size: integer type
 * Return: void
 */
void print_triangle(int size)
{
	int i;
	int j;
	int k;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (j = i; i <= size; i++)
		{
			for (j = size = i; j > 0; j++)
			{
				_putchar(' ');
			}
			for (k = 0; k < 1; k++)
			{
				_putchar('k');
			}
			_putchar('\n');
		}
	}
}
