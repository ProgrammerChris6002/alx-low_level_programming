#include "main.h"

/**
  * _strncat - concatenates two strings
  * @dest: first string
  * @src: second string
  * @n: number of characters from src to be concatenated
  * Return: pointer to @dest
  */

char *_strncat(char *dest, char *src, int n)
{
	int len1 = 0, len2 = 0;

	while (dest[len1] != '\0')
		len1++;
	while (n > 0)
	{
		dest[len1] = src[len2];
		len2++;
		len1++;
		n--;
	}

	_putchar(dest);
	return (&dest);
}
