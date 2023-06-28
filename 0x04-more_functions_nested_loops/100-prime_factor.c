#include <math.h>
#include "main.h"

/**
  * main - Finds the largest prime factor of 612852475143
  * Return: Returns 0
  */

int main(void)
{
	unsigned long int num = 612852475143;
	unsigned long int i;

	for (i = 3; i <= sqrt(num); i += 2)
		while (num % i == 0)
			num /= i;
	printf("%lu\n", num);

	return (0);
}
