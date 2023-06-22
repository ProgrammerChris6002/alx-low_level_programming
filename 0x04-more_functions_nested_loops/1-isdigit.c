#include "main.h"

/**
  * _isdigit - Checks for a digit(0 to 9) in a string
  * @c: Integer to be checked
  * Return: Returns 1 if True, 0 otherwise
  */

int _isdigit(int c)
{
	int i;

	for (i = '0'; i <= '9'; i++)
		if (c == i)
			return (1);
	return (0);
}
