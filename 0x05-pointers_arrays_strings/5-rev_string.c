#include "main.h"

/**
  * rev_string - reverses a string
  * @s: string to be reversed
  */

void rev_string(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		_putchar(s[len]);
		len++;
	}
	_putchar(10);

	len--;
	//while (len >= 0)
	//{
	//	_putchar(s[len]);
	//	len--;
	//}
	//_putchar(10);
}
