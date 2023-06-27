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
		s[len] = s[len2];
		len2++;
		len--;
	}
}
