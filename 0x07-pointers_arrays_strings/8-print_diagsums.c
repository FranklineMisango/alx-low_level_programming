#include "holberton.h"

/**
 * print_diagsums - prints the sum of 2 square matrix of integers
 * @a: first integer
 * @size: second integer
 * Return: the sum
 */

void print_diagsums(int *a, int size)
{
int x, sum1 = 0, sum2 = 0;

for (x = 0; x < size; x++)
{
sum1 += a[x];
a += size;
}
a -= size;
for (x = 0; x < size; x++)
{
sum2 += a[x];
a -= size;
}
printf("%d, %d\n", sum1, sum2);
}
