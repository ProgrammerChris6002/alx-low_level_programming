#include "main.h"

/**
  * print_diagonal - Prints backslash n times
  * @n: Number of times to print backslash
  */

void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
		for (i = 0; i < n; i++)
		{
			for (j = 0; j <= i; j++)
				putchar(' ');
			putchar('\\');
			putchar('$');
			if (i != n)
				putchar('\n');
		}
	else
	{
		putchar('$');
		putchar('\n');
	}
}
