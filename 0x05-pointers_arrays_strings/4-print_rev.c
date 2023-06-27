#include "main.h"

/**
  * print_rev - prints a string in reverse order
  * @s: string to be printed
  */

void print_rev(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	while (len >= 0)
	{
		putchar(s[len]);
		len--;
	}
	_putchar('\n');
}
