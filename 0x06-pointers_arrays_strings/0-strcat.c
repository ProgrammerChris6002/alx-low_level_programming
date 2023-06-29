#include "main.h"

/**
  * _strcat - concatenates two strings
  * @dest: first string
  * @src: second string
  */

char * _strcat(char *dest, char *src)
{
	int len1 = 0, len2 = 0;

	while (dest[len1] != '\0')
		len1++;
	while (src[len2] != '\0')
	{
		dest[len1] = src[len2];
		len2++;
		len1++;
	}

	_putchar(dest);
	return (&dest);
}
