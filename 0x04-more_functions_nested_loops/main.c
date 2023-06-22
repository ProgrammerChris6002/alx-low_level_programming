#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j < 10)
				putchar(j + '0');
			else
				putchar("%d", j)
		}
		putchar('\n');
	}
    return (0);
}
