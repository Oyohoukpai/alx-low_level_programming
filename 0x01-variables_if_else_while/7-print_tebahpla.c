#include <unistd.h>
#include <stdio.h>
/**
 * main - print the alphabet at reverse
 * Description: print lowcase alphabet in reverse
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;

	for (a = 'z'; a >= 'a'; a--)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
