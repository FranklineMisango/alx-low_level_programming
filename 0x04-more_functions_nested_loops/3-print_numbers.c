#include "holberton.h"

/**
 * print_numbers - prints 0 to 9
 * Description: prints all digits
 * Return: 0 to 9
 */

void print_numbers(void)
{
char x = 0;

while (x <= 10)
{
_putchar('0' + x);
x++;
}
_putchar('\n');
}
