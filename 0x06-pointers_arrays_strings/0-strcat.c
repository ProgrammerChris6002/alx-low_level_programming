#include "main.h"

/**
  * _strcat - concatenates two strings
  * @dest: first string
  * @src: second string
  * Return: pointer to @dest
  */

char *_strcat(char *dest, char *src)
{
	int i;
	int len1 = 0;
	int len2 = 0;

	while (dest[len1] != '\0')
		len1++;

	if (len1 > 0)
		for (i = 0; i < len1; i++)
			if (dest[i] == '\0')
			{
				dest[i] = '\0';
				break;
			}

	while (src[len2] != '\0')
	{
		dest[len1] = src[len2];
		len2++;
		len1++;
	}
	dest[len1] = '\0';

	return (dest);
}
