#include <stdio.h>
#include "holberton.h"

/**
 * print_to_98- prints from n to 98
 * return: return
 * @n- starting number
 */

void print_to_98(int n)
{
  while (n < 98)
{
printf("%i, ", n);
n++;
}
while (n > 98)
{
printf("%i, ", n);
n--;
}

printf("98");
putchar('\n');
}
