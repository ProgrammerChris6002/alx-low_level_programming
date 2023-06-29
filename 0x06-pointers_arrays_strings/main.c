#include <stdio.h>

int main(void)
{
	char dest[] = "Hello ";
	char src[] = "World!\n";
	int len1 = 0, len2 = 0;

	while (dest[len1] != '\0')
		len1++;
	while (src[len2] != '\0')
	{
		dest[len1] = src[len2];
		len2++;
		len1++;
	}

	printf("%s", dest);
	return (0);
}
