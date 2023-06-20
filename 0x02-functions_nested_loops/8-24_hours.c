#include <stdio.h>
#include "main.h"
/**
  * jack_bauer - This prints every number from 00:00 to 23:59
  */

void jack_bauer(void)
{
	int i, j;


	for (i = 0; i < 24; i++)
	{
		for (j = 0; j <= 59; j++)
		{
			putchar('0' + (i / 10));
			putchar('0' + (i % 10));
			putchar(':');
			putchar('0' + (j / 10));
			putchar('0' + (j % 10));
			putchar('\n');
		}
	}
}
