#include <stdio.h>
#include "main.h"
/**
  * main - This prints alphabet characters from print_alphabet() function
  * Return: This Returns 0
  */

int main(void)
{
	print_alphabet();
	return (0);
}

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
