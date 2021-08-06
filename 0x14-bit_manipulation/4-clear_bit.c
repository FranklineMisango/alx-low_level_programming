#include "main.h"

/**
 * clear_bit - function that sets the value of a bit
 * to 1 at a given index.
 * @n: pointer to bit
 * @index: sets value from 0
 *
 * Return: -1 on error or 1 on success
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index >= (sizeof(unsigned long int) * 8))
return (-1);

*n &= ~(1 << index);

return (1);
}
