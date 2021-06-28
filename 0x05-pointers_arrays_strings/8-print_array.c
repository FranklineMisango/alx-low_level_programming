#include "holberton.h"
#include <stdio.h>

/**
 * print_array - prints n integers of an array
 *@n: number of integers in the array that will be printed
 *@a: array location
 * You can use printf
 *return: void
 */

void print_array(int *a, int n)
{
int i;

i = 0;
for (n--; n >= 0; n--, i++)
{
printf("%d", a[i]);
if (n > 0)
{
printf(", ");
}
}
printf("\n");

}
