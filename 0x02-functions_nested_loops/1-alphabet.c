#include "main.h"
/**
 * main - Entry point
 * Description: Write a function that prints the alphabet in lowercase.
 * Return: Always 0 (success)
 */
void print_alphabet(void)
{
int ny;

for (ny = 'a'; ny <= 'z'; ny++)
{
	_putchar(ny);
}
_putchar('\n');
return (0);
}
