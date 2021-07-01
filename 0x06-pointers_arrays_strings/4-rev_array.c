#include "holberton.h"

/**
 * reverse_array - reverse the contents of an array
 * @a: pointer to array
 * @n: number of elements in the array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int forward, reverse, tmp;

	for (forward = 0; forward < n; forward++)
	{
	}

	reverse = n - 1;
	forward = 0;

	while (reverse > forward)
	{
		tmp = a[forward];
		a[forward] = a[reverse];
		a[reverse] = tmp;
		forward++;
		reverse--;

	}
}
