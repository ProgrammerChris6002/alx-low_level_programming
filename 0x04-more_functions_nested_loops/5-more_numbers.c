#include <stdio.h>
#include "main.h"

/**
  * more_numbers - This prints digits from 0 to 14 10 times
  */

void more_numbers(void)
{
	int i;

	while (i < 10)
	{
		int j;

		for (j = 0; j <= 14; j++)
			putchar(j + '0');
		putchar('\n');
		i++;
	}
}
