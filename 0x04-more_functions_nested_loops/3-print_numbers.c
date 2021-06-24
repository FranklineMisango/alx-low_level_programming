#include "holberton.h"

/**
 * print_numbers - prints 0 to 9
 * Description: prints all digits
 * Return: 0 to 9
 */

void print_numbers(void)
{
int x = 48;

while (x < 58)
{
_putchar(x);
x++;
}
_putchar('\n');
}
