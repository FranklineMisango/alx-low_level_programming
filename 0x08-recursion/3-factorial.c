#include "holberton.h"

/**
 * factorial - returns factorial of a certain number
 * @n: the integer
 * Return: 0, -1 or the answer
 */

int factorial(int n)
{
int ans;
if (n < 0)
{
return (-1);
}
else if (n == 0)
{
return (1);
}
{
ans = n * factorial(n - 1);
return (ans);
}
}
