#include "main.h"

/**
  * rot13 - encodes a string using rot13
  * @a: string to be encoded
  * Return: a
  */

char *rot13(char *a)
{
	int i;
	int j;
	char s1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char s2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; a[i] != '\0'; i++)
		for (j = 0; j < 52; j++)
			if (a[i] == s1[j])
			{
				a[i] = s2[j];
			}
	return (a);
}
