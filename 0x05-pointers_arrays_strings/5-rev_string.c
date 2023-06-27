#include "main.h"

/**
  * rev_string - reverses a string
  * @s: string to be reversed
  */

void rev_string(char *s)
{
	int len = 0, len2 = 0;

	while (s[len] != '\0')
		len++;

	len--;
	while (len >= 0)
	{
		if (len != len2)
			s[len2] = s[len];
		len2++;
		len--;
	}
}
