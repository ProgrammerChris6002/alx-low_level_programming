#include "main.h"

/**
  * rev_string - reverses a string
  * @s: string to be reversed
  */

void rev_string(char *s)
{
	char s2[500];
	int i, len = 0, len2;

	while (*(s + len) != '\0')
	{
		s2[len] = *(s + len);
		len++;
	}
	s2[len] = '\0';

	len--;
	len2 = len;
	for (i = 0; i <= len2; i++)
	{
		*(s + i) = s2[len];
		len--;
	}
	*(s + i) = '\0';
}
