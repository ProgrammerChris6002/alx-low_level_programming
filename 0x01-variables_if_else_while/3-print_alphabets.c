#include <stdio.h>
/**
 * main - This Prints alphabets in upper and lower case
 * Return: This Returns 0
 */

int main(void)
{
	int i;

	for (i = 65; i <= 90; ++i)
		putchar(i);
	for (i = 97; i <= 122; ++i)
		putchar(i);

	putchar('\n');

	return (0);
}
