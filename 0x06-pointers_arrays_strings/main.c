#include <stdio.h>

int main(void)
{
	char dest[] = "Hello ";
	char src[] = "World!\n";
	int i, n = 1;
	int len1 = 0, len2 = 0;

	while (dest[len1] != '\0')
		len1++;
	for (i = 0; i < n; i++)
	{
		dest[len1] = src[len2];
		len2++;
		len1++;
	}

	printf("%s", dest);
	return (0);
}
