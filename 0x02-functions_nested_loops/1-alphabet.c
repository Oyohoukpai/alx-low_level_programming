#include "main.h"
/**
*Print_alphabet - Entry point
 *Description: Program that prints the alphabet in lowercase
 *follow with a new line
 *Return: Exit int function with an int 0
 */
void print_alphabet(void)
{
int ny;

for (ny = 'a'; ny <= 'z'; ny++)
{
	_putchar(ny);
}
_putchar('\n');
}
