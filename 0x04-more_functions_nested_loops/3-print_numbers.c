#include <stdio.h>
#include "main.h"

/**
  * print_numbers - This prints digits from 0 to 9
  */

void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
		putchar(i + '0');
	putchar('\n');
}
