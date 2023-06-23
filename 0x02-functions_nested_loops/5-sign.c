#include <stdio.h>
#include "main.h"
/**
  * print_sign - Prints the sign of a number
  * @n: Gets the number to be checked
  * Return: This Returns -1, 0 or 1
  */

int print_sign(int n)
{
	if (n > 0)
	{
		printf("+1");
		return (1);
	}
	else if (n == 0)
	{
		printf("00");
	}
	else
	{
		printf("-1");
		return (-1);
	}

	return (0);
}
