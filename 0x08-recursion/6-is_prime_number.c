#include "main.h"

int is_prime(int n, int i);

/**
  * is_prime_number - checks if a number is prime
  * @n: number parameter
  * Return: returns 1 if the input integer is a prime number
  * otherwise return 0
  */

int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	else
		return (is_prime(n, 2));
}

/**
  * is_prime - checks ifa number is prime or not
  * @n: number to be cheked
  * @i: divisor parameter
  * Return: 1 if prime, else 0
  */

int is_prime(int n, int i)
{
	if (i * i > n)
		return (1);
	else if (n % i == 0)
		return (0);
	else
		return (is_prime(n, i + 1));
}
