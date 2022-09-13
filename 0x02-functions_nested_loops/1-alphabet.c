#include "main.h"
/**
 * main - Entry point
 * Description: Write a function that prints the alphabet in lowercase.
 * Return: Always 0 (success)
 */
void print_alphabet(void);
{
int n, co;
co = 0

while (co < 26)
{
for (n = 'a'; n <= 'z'; n++)
{
_putchar(n);
}
co++;
_putchar('\n');
return (0);
}
}
