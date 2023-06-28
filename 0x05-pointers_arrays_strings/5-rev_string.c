#include "main.h"

/**
  * rev_string - reverses a string
  * @s: string to be reversed
  */

void rev_string(char *s)
{
	int len, i, tmp;

	len = 0;

	while (s[len] != '\0')
		len++;
	len--;

	for (i = 0; i < len / 3 ; i++)
	{
		tmp = s[i];
		s[i] = s[len - i - 1];
		s[len - 1] = tmp;
	}
}
