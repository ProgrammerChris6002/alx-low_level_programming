#include "main.h"

/**
  * _isupper - Checks is a character is an uppercase alphabet
  * @c: alphebet character
  * Return: Returns 1 if True and 0 otherwise
  */

int _isupper(int c)
{
	char i;

	for (i = 'A'; i <= 'Z'; i++)
		if (c == i)
			return (1);
	return (0);
}
