#include "main.h"

/**
  * string_toupper - converts string to uppercase
  * @a: string to be converted
  * Return: 0
  */

char *string_toupper(char *a)
{
	int i;

	while (a[i] != '\0')
	{
		if (a[i] >= 'a' && a[i] <= 'z')
			a[i] = a[i] - 32;
		i++;
	}
	return (a);
}
