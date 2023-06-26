#include <stdio.h>
#define LARGEST 10000000000

/**
  * main - This prints the first 100 numbers of the Fibonacci Series starting
  * from 1 and 2
  * Return: This Returns 0
  */

int main(void)
{
	unsigned long int n1 = 1, n2 = 2, next1, n11, n22, next2;
	int i;

	printf("%lu, %lu, ", n1, n2);
	for (i = 2; i < 98; i++)
	{
		if (i <= 90)
		{
			next1 = n1 + n2;
			n1 = n2, n2 = next1;
			printf("%lu", n2);
			if (i < 97)
				printf(", ");
		}
		else if (i > 90)
		{
			n11 = n1, n22 = n2;
			next2 = n11 + n22;
			n11 = n22, n22 = next2;
			n1 = n11, n2 = n22;
			printf("%lu", n22);
			if (i < 97)
				printf(", ");
		}
	}
	printf("\n");

	return (0);
}
