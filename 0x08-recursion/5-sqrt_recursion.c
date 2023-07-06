#include "main.h"

int _sqrt_helper(int n, int guess);

/**
  * _sqrt_recursion - returns the natural square root of a number
  * @n: number parameter
  * Return: square root of n
  */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (_sqrt_helper(n, 1));
}

/**
  * _sqrt_helper - checks if the square of the current guess is equal to n
  * @n: number to check
  * Return: guess
  */

int _sqrt_helper(int n, int guess)
{
	if (guess * guess == n)
		return guess;
	else if (guess * guess > n)
		return -1;
	else
		return (_sqrt_helper(n, guess + 1));
}
