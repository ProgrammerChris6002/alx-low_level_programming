#include "main.h"
/**
  * _islower - Checks if an alphabet is lower case or not
  * @c: Parameter helps check the alphabet
  * Return: This Returns 0 or 1
  */

int _islower(int c)
{
	int i = 0;

	for (i = 97; i <= 122; i++)
		if (c == i)
			return (1);
	return (0);
}
