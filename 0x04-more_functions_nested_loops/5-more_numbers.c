#include <stdio.h>
#include "main.h"

/**
  * more_numbers - This prints digits from 0 to 14 10 times
  */

void more_numbers(void)
{
	int i = 0, j;

	while (i < 10)
	{
		for (j = 0; j <= 14; j++)
		{
			if (i < 10)
			{
				putchar(j + '0');
			}
			else
			{
				putchar((j / 10) + '0');
				putchar((j % 10) + '0');
			}
		}
		putchar('\n');
		i++;
	}
}
