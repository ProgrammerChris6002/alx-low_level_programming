#include <stdio.h>
#include "main.h"
/**
  * print_alphabet - This prints lowercase alphabet characters(a-z)
  */

void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
		putchar(i);
	putchar('\n');
}
