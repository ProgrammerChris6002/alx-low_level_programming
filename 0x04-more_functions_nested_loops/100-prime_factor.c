#include <stdio.h>

/** is_prime - Checks if a number is prime
  * @num: Number to check
  * Return: Returns 1 if True, 0 otherwise
  */

int is_prime(unsigned long long int num)
{
	unsigned long long int i;

	for (i = num - 1; i >= 2; i--)
		if (num % i == 0)
			return (0);

	return (1);
}

/**
  * main - Finds the largest prime factor of 612852475143
  * Return: Returns 0
  */

int main(void)
{
	unsigned long long int num = 612852475143, i;

	for (i = num - 1; i >= 2; i--)
		if (is_prime(i) == 1 && num % i == 0)
		{
			printf("%llu\n", i);
			break;
		}

	return (0);
}
