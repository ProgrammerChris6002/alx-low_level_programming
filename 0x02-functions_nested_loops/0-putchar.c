#include "main.h"
/**
  * main - This prints _putchar
  * Return: This Returns 0
  */

int main(void)
{
	char str[] = "_putchar";
	int i;

	for (i = 0; str[i] != '\0'; i++)
		putchar(str[i]);
	putchar('\n');

	return (0);
}
