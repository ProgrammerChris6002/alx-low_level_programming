#include <stdio.h>
/**
 * main - This print the sizes of various data types
 * Return: This returns 0
 */

int main(void)
{
	printf("Size of a char: %ld\n", sizeof(char));
	printf("Size of an int: %ld\n", sizeof(int));
	printf("Size of a long int: %ld\n", sizeof(long int));
	printf("Size of a long long int: %ld\n", sizeof(long long int));
	printf("Size of a float: %ld\n", sizeof(float));
	return (0);
}
