#include "holberton.h"

/**
 * more_numbers- prints 0 to 14 ten times
 * @i: first integer
 * @j: second integer
 * Description: prints 0-14 ten times
 * Return: void
 */

void more_numbers(void)
{
int i = 1;
int j;
while (i <= 10)
{
j = 0;
while (j <= 14)
{
_putchar(j);
j++;
}
_putchar('\n');
i++;
}
}
