#include <stdio.h>

int main(void)
{
	char str[] = "Holberton!", str2[500];
	int i, len = 0, len2;

	while (str[len] != '\0')
	{
		str2[len] = str[len];
		len++;
	}
	str2[len] = '\0';

	len--;
	len2 = len;
	for (i = 0; i <= len2; i++)
	{
		str[i] = str2[len];
		len--;
	}
	str[i] = '\0';

	printf("%s\n", str);
	printf("%s\n", str2);
	return (0);
}
