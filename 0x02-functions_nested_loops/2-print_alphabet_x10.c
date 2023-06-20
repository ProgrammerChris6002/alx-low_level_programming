#include <stdio.h>
#include "main.h"
/**
  * print_alphabet_x10 - This prints  alphabet characters 10 times
  */

void print_alphabet_x10(void)
{
	int i, j = 0;

	while (j < 5)
	{
		for (i = 97; i <= 122; i++)
			putchar(i);
		putchar('\n');
		j++;
	}
}
