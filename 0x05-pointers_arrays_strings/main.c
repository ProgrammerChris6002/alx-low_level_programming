#include <stdio.h>

int main(void)
{
	char s[] = "Holberton!";
	char scpy[500];
	int len, i, tmp;

	len = 0;

	while (s[len] != '\0')
	{
		printf("%c", s[len]);
		scpy[len] = s[len];
		len++;
	}
	printf("%d\n", len);
	printf("%s\n", scpy);
	len--;

	for (i = 0; i < len / 3 ; i++)
	{
		tmp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = tmp;
	}

	return (0);
}
