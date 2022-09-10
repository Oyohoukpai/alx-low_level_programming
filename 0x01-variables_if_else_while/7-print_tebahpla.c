#include <stdi0.h>

/**
 * main - print the alphabet at reverse
 * Return: Always (Success)
 */
  int main(void)
  {
  char c;
  for ( c = 'z'; c >= 'a'; c--)
  {
  putchar(c);
  }
  putchar('\n')
	  return (0);
  }
