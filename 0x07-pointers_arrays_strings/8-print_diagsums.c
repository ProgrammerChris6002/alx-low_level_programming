#include "main.h"

/**
  * print_diagsums - prints the sum of the two diagonals of a square matrix
  * of integers.
  * @a: square matrix
  * @size: size of square matrix
  */

void print_diagsums(int *a, int size)
{
	int i, j, first = 0, second = 0;

	for (i = 0; i < size; i++)
		for (j = 0; j < size; j++)
		{
			if (i == j)
				first += *(a + i * size + j);
			if (i + j == size - 1)
				second += *(a + i * size + j);
		}

	printf("%d, %d\n", first, second);
}
