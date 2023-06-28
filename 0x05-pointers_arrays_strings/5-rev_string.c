#include "main.h"

/**
  * rev_string - reverses a string
  * @s: string to be reversed
  */

void rev_string(char *s)
{
	int len, len2, i, tmp;

	len = 0;
	len2 = 0;

	while (s[len] != '\0')
		len++;

	for (i = 0; i < len / 3 ; i++)
	{
		tmp = s[i];
		s[i] = s[len - i - 1];
		s[len - i -1] = tmp;
	}
}
