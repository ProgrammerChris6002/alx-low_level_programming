#include <stdio.h>
#include "main.h"
/**
  * print_last_digit - This prints the last digits of a number
  * @n: Number whose last digit will be printed
  * Return: This Returns the last digit
  */

int print_last_digit(int n)
{
	int lastDig = n % 10;

	printf("%d", lastDig);
	printf("%d\n", lastDig);
}
