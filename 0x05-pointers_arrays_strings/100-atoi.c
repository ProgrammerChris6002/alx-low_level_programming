#include "main.h"

/**
  * _atoi - This converts a string to an integer
  * @s: string parameter
  * Return: integer converted from string if integer is present in the string
  * else it returns 0
  */

int _atoi(char *s)
{
	int i, d, n, len, flag, digit;

	i = 0;
	d = 0;
	n = 0;
	len = 0;
	flag = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;

	while (i < len && flag == 0)
	{
		if (s[i] == '-')
			d++;

		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (d % 2 == 1)
				digit = -digit;
			n = n * 10 + digit;
			flag = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			flag = 0;
		}
		i++;
	}

	if (flag == 0)
		return (0);
	return (n);
}
