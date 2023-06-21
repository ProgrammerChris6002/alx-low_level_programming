#include <stdio.h>
#include "main.h"
/**
  * times_table - This print the 9 tmes table
  */

void print_times_table(int n)
{
	int i, j;

	if (n > 15 || n < 0)
		return;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			printf("%d", i * j);

			if (j != n)
			{
				if (i * j % 10 < 10)
				{
					printf(",   ");
				}
				else if (i * j % 10 < 100)
				{
					printf(",  ");
				}
				else
				{
					printf(", ");
				}
		}
		printf("\n");
	}

	printf("\n");
}
