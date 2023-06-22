#include "main.h"

/**
  * print_triangle - This prints a triangle of size n
  * @n: Size of triangle
  */

void print_triangle(int size)
{
	int i, j, k;

	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= size - i; j++)
			putchar(' ');

		for (k = 1; k <= i; k++)
			putchar('#');

		putchar('\n');
	}
}
