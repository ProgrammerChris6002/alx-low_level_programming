#include <stdio.h>

/**
  * _puts - prints a string
  * @str: string to be printed
  */

void _puts(char *str)
{
	int len = 0;

	while (str[len] != '\0')
	{
		putchar(str[len]);
		len++;
	}
	putchar('\n');
}
