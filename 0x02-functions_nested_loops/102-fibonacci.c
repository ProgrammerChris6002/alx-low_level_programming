#include <stdio.h>
/**
  * main - This prints the first 50 numbers of the Fibonacci Series starting
  * from 1 and 2
  * Return: This Returns 0
  */

int main(void)
{
	int i = 2, n1 = 1, n2 = 2;
	long int next;

	printf("%d, %d, ", n1, n2);
	while (i < 50)
	{
		next = n1 + n2;
		printf("%ld", next);
		if (i != 49)
			printf(", ");
		n1 = n2;
		n2 = next;
		i++;
	}
	printf("\n");

	return (0);
}
