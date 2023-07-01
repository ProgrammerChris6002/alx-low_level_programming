#include <stdio.h>

int main(void)
{
	char str[] = "Hello", str2[10];
	int i, len = 0;

	while (str[len] != '\0')
	{
		str2[len] = str[len];
		len++;
	}
	str2[len] = '\0';
	printf("%s\n", str);
	printf("%s\n", str2);

	return (0);
}
