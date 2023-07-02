#include "main.h"

char *leet(char *a)
{
	int i;
	int j;
	char a2[] = "aAeEoOtTlL";
	char nums[] = "4433007711";

	for (i = 0; a[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
			if (a[i] == a2[j])
				a[i] = nums[j];
	}
	return (a);
}
