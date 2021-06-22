#include "holberton.h"

/**
 * print_sign - to print the sign of a number
 *_putchar: Prints character
 *@n: number input
 *Description: Returns signage
 *Return: 0 to 1
 */

int print_sign(int n)
{
int test;
if (n > 0)
{
test = 1;
_putchar('+');
}
if (n == 0)
{
test = 0;
_putchar('0');
}
else if (n < 0)
{
test = -1;
_putchar('-');
}
return (test);
}
