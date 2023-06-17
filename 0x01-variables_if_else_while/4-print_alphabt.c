#include <stdio.h>
/**
 * main - This Prints every letter of the alphabet
 * Return: This Returns 0
 */

int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		if (i != 101 && i != 113)
			putchar(i);
	}

	putchar('\n');

	return (0);
}
