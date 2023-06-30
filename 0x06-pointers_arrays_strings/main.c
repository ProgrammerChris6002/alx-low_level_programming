#include <stdio.h>

int main(void)
{
	int i;
	int n = 1;
	int len1 = 0;
	int len2 = 0;
	char dest[] = "Hello ";
	char src[] = "World!\n";

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
