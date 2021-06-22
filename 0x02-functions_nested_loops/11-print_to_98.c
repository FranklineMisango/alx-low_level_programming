#include <stdio.h>
#include "holberton.h"

/**
 * print_to_98- prints from n to 98
 * @n: starting number
 *Description- Print from n to 98
 */

void print_to_98(int n)
{
  /*n is the number we are starting with*/
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
