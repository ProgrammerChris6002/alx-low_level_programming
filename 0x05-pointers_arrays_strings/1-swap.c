#include <stdio.h>

/**
  * swap_int - Swaps the values of two integers
  * @a: first integer
  * @b: second integer
  * Return: nothing
  */

void swap_int(int *a, int *b)
{
	a += b;
	b = a - b;
	a -= b;
}
