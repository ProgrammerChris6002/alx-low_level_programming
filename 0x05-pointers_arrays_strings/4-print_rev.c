#include "main.h"

/**
  * print_rev - prints a string in reverse order
  * @s: string to be printed
  */

void print_rev(char *s)
{
	int len = 0;

	while (str[len] != '\0')
		len++;
	while (len >= 0)
	{
		putchar(str[len]);
		len--;
	}
	putchar('\n');
}
