#include "main.h"

/**
  * _strstr - locates a substring in a string
  * @haystack: search location
  * @needle: substring checked for
  * Return: pointer to substring beginning in haystack if found, else NULL
  */

char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int len = 0;
	int len2 = 0;
	int count = 0;
	char str[100];

	while (needle[len])
		len++;

	while (*haystack)
	{
		while (needle[i])
		{
			if (*haystack == needle[i])
			{
				str[count] = needle[i];
				count++;
			}
			i++;
		}
		haystack++;
	}
	str[count] = '\0';

	while (str[len2])
		len2++;

	if (len == len2)
		return (haystack);
	return (NULL);
}
