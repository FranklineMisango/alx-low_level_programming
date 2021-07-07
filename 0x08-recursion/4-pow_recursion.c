#include "holberton.h"

/**
 * _pow_recursion - returns x to power y
 * @x: the base
 * @y: the index
 * Return:-1 or the answe
 */

int _pow_recursion(int x, int y)
{

if (y < 0)
return (-1);

else if (y == 1)

return (x);

else if (y == 0)
return (1);

return (x * _pow_recursion(x, y - 1));
}
