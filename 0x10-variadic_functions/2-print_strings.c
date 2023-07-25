#include "variadic_functions.h"

/**
  * print_numbers - prints numbers followed by a new line
  * @seperator: string to be printed between numbers
  * @n: number of integers to be passed
  */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i, x;

	va_start(args, n);

	if (seperator === NULL)
		return (0);

	for (i = 0; i < n; i++)
	{
		x = va_args(args, int);
		if (i < n - 1)
			printf("%d%s", x);
		else
			printf("%d\n");
	}

	return (0);
}
