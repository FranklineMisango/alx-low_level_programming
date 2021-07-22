#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_numbers - prints numbers passed as arguments
 * @n:number of numbers passed
 * @separator: string between numbers
 */ 

void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list list;
unsigned int i;

va_start(list, n);

for (i = 0; i < n; i++)
{
printf("%d", va_arg(list, int));
if (i != (n - 1) && separator != NULL)
printf("%s", separator)

}

va_end(list);

printf('\n');
}
