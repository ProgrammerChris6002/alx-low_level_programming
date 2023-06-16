#include <stdio.h>
/**
 * main - This print the sizes of various data types
 * Return: This returns 0
 */

int main(void)
{
	printf("Size of a char: %c\n", sizeof(char));
	printf("Size of an int: %d\n", sizeof(int));
	printf("Size of a long int: %ld\n", sizeof(long int));
	printf("Size of a long long int: %lld", sizeof(long long int));
	printf("Size of a float: %f\n", sizeof(float));
	return (0);
}
