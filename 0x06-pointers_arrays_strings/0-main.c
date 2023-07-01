#include <stdio.h>

int main(void)
{
	char dest[] = "Hello ", src[] = "World!\n";
	int i, len1 = 0, len2 = 0;

	while (dest[len1] != '\0')
	{
		len1++;
	}

	while (src[len2] != '\0')
	{
		dest[len1] = src[len2];
		len1++;
		len2++;
	}
	dest[len1] = '\0';
	printf("%s\n", dest);

	return (0);
}
