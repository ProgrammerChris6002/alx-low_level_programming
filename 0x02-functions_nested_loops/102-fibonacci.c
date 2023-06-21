#include <stdio.h>
/**
  * main - This prints the first 50 numbers of the Fibonacci Series starting
  * from 1 and 2
  * Return: This Returns 0
  */

int main(void)
{
	int i, n1 = 1, n2 = 2;
	unsigned long next;

	printf("%d, %d, ", n1, n2);
	for (i = 2; i < 50; i++)
	{
		next = n1 + n2;
		printf("%lu", next);
		if (i != 50)
			printf(", ");
		n1 = n2;
		n2 = next;
	}
	printf("\n");

	return (0);
}
