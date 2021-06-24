#include "holberton.h"

/**
 * _isdigit - checks if c is a digit
 * Description - reurn 1 if digit and 0 otherwise
 * @c: integer to be tested
 * return: 1 or 0
*/

int _isdigit(int c)
{
return (c >= 48 && c <= 57);
}
