#include <stdio.h>
#include "main.h"


void main()
{
	int i, j, n;

	printf("Enter n: ");
	scanf("%d", &n);

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			putchar(' ');
			for (j = 0; j < n; j++)
			{
				putchar('\\');
				putchar('\n');
			}
		}
	}
}
