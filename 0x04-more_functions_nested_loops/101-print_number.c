#include "main.h"

/**
  * print_number - Prints an integer
  * @n: Integer to be printed
  */

void print_number(int n)
{
	int n2 = n;
	int i;
	int j;
	int div = 1;
	int len = 0;

	if (n == 0)
	{
		_putchar(0 + '0');
		_putchar('\n');
		return;
	}

	while (n2 > 0)
	{
		len++;
		n2 /= 10;
	}
	for (i = 1; i < len; i++)
		div *= 10;

	while (div > 0)
	{
		_putchar((n / div) + '0');
		n %= div;
		div /= 10;
	}
	_putchar('\n');
}
