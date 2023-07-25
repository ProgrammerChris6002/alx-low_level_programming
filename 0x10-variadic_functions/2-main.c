#include "variadic_functions.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_strings(", ", 2, "Jay", "Django");
    print_strings(", ", 2, "", "Django");
    print_strings("", 2, "Ebuka", "Django");
    return (0);
}
