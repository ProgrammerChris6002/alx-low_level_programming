#include "variadic_functions.h"

/**
  * print_numbers - prints numbers followed by a new line
  * @separator: string to be printed between numbers
  * @n: number of integers to be passed
  */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i, x;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		x = va_arg(args, int);
		printf("%d", x);

		if (separator != NULL && i != n - 1)
			printf("%s", separator);
	}

	va_end(args);
	printf("\n");
}
