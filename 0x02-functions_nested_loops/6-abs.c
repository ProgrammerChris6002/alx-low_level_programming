#include <stdio.h>
#include "main.h"
/**
  * _abs - Prints the absolute value of a number
  * @n: Number to be checked
  * Return: This Returns 0
  */

int _abs(int n)
{
	if (n < 0)
	{
		n = -1 * n;
	}
	printf("%d\n", n);

	return (0);
}
