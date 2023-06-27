#include "main.h"

/**
  * print_array - prints n elements of an array
  * @a: Array of integers
  * @n: Number of elements to be printed
  */

void print_array(int *a, int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		printf("%d", a[i - 1]);
		if (i != n)
			printf(", ");
	}
	printf("\n");
}
