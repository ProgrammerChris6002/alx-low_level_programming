#include <stdio.h>

/**
  * swap_int - Swaps the values of two integers
  * @a: first integer
  * @b: second integer
  * Return: nothing
  */

void swap_int(int *a, int *b)
{
	int *tmp[2];

	tmp[0] = a;
	tmp[1] = b;

	a = tmp[0];
	b = tmp[1];
}
