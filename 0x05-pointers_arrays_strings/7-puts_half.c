#include "main.h"

/**
  * puts_half - Prints half of a string
  * @str: String to be printed
  */

void puts_half(char *str)
{
	int len, n;

	len = 0;

	while (str[len] != '\0')
		len++;
	n = len / 2;

	n--;
	if (len % 2 != 0)
	{
		n--;
		n = (len - 1) / 2;
	}

	while (str[n] != '\0')
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
