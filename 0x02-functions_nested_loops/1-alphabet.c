#include "main.h"
/**
 * Description: program that prints the alphabets
 * followed with a new line
 * Return: Exit int function with an int 0
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
