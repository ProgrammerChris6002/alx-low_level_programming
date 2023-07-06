#include "main.h"

/**
  * int factorial - returns the factorial of a given number
  * @n: number parameter
  * Return: n
  */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
