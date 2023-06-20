#include <stdio.h>
#include "main.h"
/**
  * print_to_98 - This prints all numbers from n to 98
  * @n: Lower limit
  * Return: This Returns 0
  */

void print_to_98(int n)
{
	int i;

	if (n < 98)
		for (i = n; i < 98; i++)
			printf("%d, ", i);
	else if (n > 98)
		for (i = n; i > 98; i--)
			printf("%d, ", i);
	printf("98");
	printf("\n");
}
