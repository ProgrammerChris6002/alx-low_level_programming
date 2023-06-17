#include <stdio.h>
/**
 * main - This Prints evry letter of the alphabet
 * Return: This Returns 0
 */

int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
		putchar(i);

	putchar('\n');

	return (0);
}
