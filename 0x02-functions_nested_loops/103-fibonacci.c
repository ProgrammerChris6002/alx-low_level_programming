#include <stdio.h>
/**
  * main - This prints evens numbers in the Fibonacci Series below 4,000,000
  * Return: This Returns 0
  */

int main(void)
{
	int n1 = 1, n2 = 2;
	unsigned long next, sum = n2;

	while (sum <= 4000000)
	{
		next = n1 + n2;
		n1 = n2;
		n2 = next;
		if (next % 2 == 0)
			sum += next;
	}
	printf("%lu\n", sum);

	return (0);
}
