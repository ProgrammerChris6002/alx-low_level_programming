#include <stdio.h>
/**
  * main - This prints all natural numbers which are multiples of 3 or 5 up to
  * 1024
  * Return: This Returns 0
  */

int main(void)
{
	int i, sum = 0, limit = 1024;

	for (i = 0; i < limit; i++)
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;
	printf("%d\n", sum);

	return (0);
}
