#include "main.h"

/**
  * puts2 - prints every other character of a string
  * @str: string containing characters to be printed
  */

void puts2(char *str)
{
	int len = 0;

	while (str[len] != '\0')
	{
		if (len % 2 == 0)
			_putchar(str[len]);
		len++;
	}
}
