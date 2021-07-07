#include "holberton.h"

/**
 * _pow_recursion - returns x to power y
 * @x: the base
 * @y: the index
 * Return:-1 or the answe
 */

int _pow_recursion(int x, int y)
{
int ans;
if (y < 0)
{
return (-1);
}
else if (y == 0)
{
ans = 1;
}
else if (y > 0)
ans = x * factorial(n - 1);
return (ans);
}
}
