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
if (y == 0)
{
ans = x;
}
{
ans = x *(x **(y - 1));
return (ans);
}
}
