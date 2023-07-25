#include "variadic_functions.h"

/**
  * sum_them_all - sumsall its parameters
  * @n: number of parameters
  * Return: sum if n > 0 else 0
  */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i, sum = 0;

	va_start(args, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
		sum += va_arg(args, int);
	va_end(args);

	return (sum);
}
