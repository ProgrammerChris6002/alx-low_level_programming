#include "main.h"
/**
  * print_last_digit - This prints the last digit of a number
  * @n: Number whose last digit will be printed
  * Return: This Returns the last digit
  */

int print_last_digit(int n)
{
	int lastDig;

	if (n < 0)
		n = -n;

	lastDig = n % 10;

	if (lastDig < 0)
		lastDig = -lastDig;

	_putchar(lastDig + '0');
	return (lastDig);
}
