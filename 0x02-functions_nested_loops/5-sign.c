#include <stdio.h>
#include "main.h"
/**
  * print_sign - Prints the sign of a number
  * @n - Gets the number to be checked
  * Return: This Returns -1, 0 or 1
  */

int print_sign(int n)
{
	if (n > 1)
		return (1);
	else if (n == 0)
		return (0);
	else if (n < 1)
		return (-1);

	return (0);
}
