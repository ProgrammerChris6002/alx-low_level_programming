#include "main.h"

/**
  * print_diagonal - Prints \ n times
  * @n: Number of times to print \
  */

void print_diagonal(int n)
{

	int i, j, n;

	printf("Enter n: ");
	scanf("%d", &n);

	if (n > 0)
		for (i = 0; i < n; i++)
		{
			for (j = 0; j <= i; j++)
				putchar(' ');
			putchar('\\');
			putchar('\n');
		}
}
