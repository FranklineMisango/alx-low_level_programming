#include "holberton.h"

/**
 * _memcpy - copies memory area
 * @dest: destination pointer
 * @src: source pointer
 * @n:bytes of src to be copied to dest
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i = -1;
for (i = 0; n > 0 ; i++, n--)
{
dest[i] = src[i];
}
return (dest);
}
