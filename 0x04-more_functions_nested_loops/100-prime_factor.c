#include <math.h>
#include "main.h"

int is_prime(unsigned long int num);

/**
  * main - Finds the largest prime factor of 612852475143
  * Return: Returns 0
  */

int main(void)
{
	unsigned long int num = 612852475143;
	unsigned long int i;

	while (num % 2 == 0)
		num /= 2;

	for (i = 3; i <= sqrt(num); i += 2)
		while (num % i == 0)
			num /= i;
	printf("%lu\n", num);

	return (0);
}

/**
  * is_prime - Checks if a number is prime
  * @num: Number to check
  * Return: Returns 1 if True, 0 otherwise
  */

int is_prime(unsigned long int num)
{
	unsigned long int i;

	if (num < 2)
		return (0);

	for (i = 2; i <= sqrt(num); i++)
		if (num % i == 0)
			return (0);

	return (1);
}
