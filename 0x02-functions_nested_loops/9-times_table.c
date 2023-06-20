#include <stdio.h>
#include "main.h"
/**
  * times_table - This print the 9 tmes table
  */

void times_table(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			printf("%d", i * j);

			if (j != 9)
				printf(",  ");
		}
		printf("\n");
	}

	printf("\n");
}
