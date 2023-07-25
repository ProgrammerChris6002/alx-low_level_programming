#include "variadic_functions.h"

/**
  * print_strings - prints strings followed by a new line
  * @separator: string to be printed between strings
  * @n: number of stringss to be passed
  */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	const char *x;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		x = va_arg(args, const char *);
		printf("%s", (x != NULL) ? x : "(nil)");

		if (separator != NULL && i != n - 1)
			printf("%s", separator);
	}

	va_end(args);
	printf("\n");
}
