#include "main.h"

/**
  * print_diagonal - Prints \ n times
  * @n: Number of times to print \
  */

void print_diagonal(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			putchar('\\');
		}
	}
}
