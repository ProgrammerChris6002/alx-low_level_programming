#include <stdio.h>
#define LARGEST 10000000000

/**
  * main - This prints the first 50 numbers of the Fibonacci Series starting
  * from 1 and 2
  * Return: This Returns 0
  */

int main(void)
{
	unsigned long int n1 = 1, n2 = 2, next1, n11, n22, next2;
	int i;

	printf("%lu, %lu, ", n1, n2);
	for (i = 2; i < 50; i++)
	{
		if (i <= 50)
		{
			next1 = n1 + n2;
			n1 = n2, n2 = next1;
			printf("%lu", n2);
			if (i < 49)
				printf(", ");
		}
	}
	printf("\n");

	return (0);
}
