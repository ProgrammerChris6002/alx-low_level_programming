#include <stdio.h>
/**
 * main - This Prints alphabets in reverse order
 * Return: This Returns
 */

int main(void)
{
	int i;

	for (i = 122; i >= 97; --i)
		putchar(i);

	putchar('\n');

	return (0);
}
