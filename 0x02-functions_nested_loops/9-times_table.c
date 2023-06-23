#include <stdio.h>
#include "main.h"
/**
  * times_table - This print the 9 tmes table
  */

void times_table(void)
{
	int i, j, product;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			product = i * j;
			printf("%-2d", product);
			if (j != 9)
				printf(" ");
		}
		printf("\n");
	}
}
