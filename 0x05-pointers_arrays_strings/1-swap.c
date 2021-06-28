#include "holberton.h"

/**
 *swap_int() - swaps the values of two integers
 *@a: the first integer
 *@b: the second integer
 *return: void
 */

void swap_int(int *a, int *b)
{
*a += *b;
*b = *a - *b;
*a = *a - *b;
}
