#include <stdio.h>
#define LARGEST 10000000000

/**
  * main - This prints the first 98 numbers of the Fibonacci Series starting
  * from 1 and 2
  * Return: This Returns 0
  */

int main(void)
{
	unsigned long int n1 = 1, n2 = 2, cover1 = 0, cover2 = 0;
	unsigned long int hold1, hold2, hold3;
	int i;

	printf("%lu, %lu, ", n1, n2);
	for (i = 2; i < 98; i++)
	{
		if (n1 + n2 > LARGEST || cover2 > 0 || cover1 > 0)
		{
			hold1 = (n1 + n2) / LARGEST;
			hold2 = (n1 + n2) % LARGEST;
			hold3 = n1 + n2 + hold1;
			n1 = n2, n2 = hold3;
			n1 = n2, n2 = hold2;
			printf("%lu%010lu", cover2, n2);
		}
		else
		{
			hold2 = n1 + n2;
			n1 = n2, n2 = hold2;
			printf("%lu", n2);
		}
		if (i != 50)
		{
			printf(", ");
		}
	}
	printf("\n");

	return (0);
}
