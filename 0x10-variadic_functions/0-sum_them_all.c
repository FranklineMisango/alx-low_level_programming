#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sums up the variadic arguments
 * @n:number of variadic arguments
 * Return: sum of variadic parameters or 0
 */

int sum_them_all(const unsigned int n, ...)
{
if (n == 0)
return (0);

va_list list;
unsigned int i, sum = 0;

va_start(list, n);

if (n != 0)
for (i = 0; i < n; sum += va_arg(list, unsigned int), i++)
;
va_end(list);

return (sum);
}
