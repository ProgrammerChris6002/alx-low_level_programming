#include <stdio.h>
#include "main.h"
/**
  * _islower - Checks if a character is an alphabet or not
  * @c: Parameter helps check the charater
  * Return: This Returns 0 or 1
  */

int _islower(int c)
{
	int i = 0;

	for (i = 97; i <= 122; i++)
		if (c == i)
			return (1);

	for (i = 65; i <= 90; i++)
		if (c == i)
			return (1);

	return (0);
}
