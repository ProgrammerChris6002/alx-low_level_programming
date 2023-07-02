#include <stdio.h>

/**
  * reverse_array - Reverses an array
  * @a: array to be reversed
  * @n: Number of elements in array
  */

void reverse_array(int *a, int n)
{
	int a2[500];
	int i;
	int n2;
	int n3;

	n2 = 0;
	while (n2 < n)
	{
		a2[n2] = a[n2];
		n2++;
	}

	n3 = n - 1;
	for (i = 0; i < n; i++)
	{
		a[i] = a2[n3];
		n3--;
	}
}
