#include "main.h"
/**
*print_alphabet - Entry point
*Description: program that prints the alphabets
*followed by a new line
*Return: Exit int function with an int 0
*/
void print_alphabet(void)
{
int ap;


for (ap = 'a'; ap <= 'z'; ap++)
{
_putchar(ap);
}
_putchar('\n');
}
