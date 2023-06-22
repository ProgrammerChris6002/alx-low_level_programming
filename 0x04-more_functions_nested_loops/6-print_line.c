#include "main.h"

/**
  * print_line - This prints _ n times
  * @n: Number of times to print _
  */

void print_line(int n)
{
	int i;

	if (n > 0)
		for (i = 0; i < n; i++)
			putchar('_');
	putchar('\n');
}
