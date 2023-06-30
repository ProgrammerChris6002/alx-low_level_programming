#include <stdio.h>

int main(void)
{
	int i;
	int len1 = 0;
	int len2 = 0;
	char dest[] = "Hello ";
	char src[] = "World!\n";

	while (dest[len1] != '\0')
		len1++;

	if (len1 > 0)
		for (i = 0; i < len1; i++)
			if (dest[i] == '\0')
			{
				dest[i] = ' ';
				break;
			}

	while (src[len2] != '\0')
	{
		dest[len1] = src[len2];
		len2++;
		len1++;
	}
	dest[len1 + len2] = '\0';

	printf("%s", dest);
	return (0);
}
