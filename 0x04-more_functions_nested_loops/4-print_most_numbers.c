#include "holberton.h"

/**
 * print_most_numbers - prints 0 to 9 excluding 2 & 4
 * Description: prints all digits apart from 2 and 4
 * Return: 01356789
 */

void print_most_numbers(void)
{
int x;

for (x = 48; x < 58; x++)
if (x == 50 || x == 52)
{
_putchar();
}
else
{
_putchar (x);
}
