#include "main.h"

/**
  * print_square - This prints a square using hash symbol
  * @size: Size of the square
  */

void print_square(int size)
{
	int i, j;

	if (size > 0)
	{
		i = 0;
		while (i < size)
		{
			for (j = 0; j < size; j++)
			{
				putchar('#');
			}
			putchar('\n');
			i++;
		}
	}
	putchar('\n');
}
