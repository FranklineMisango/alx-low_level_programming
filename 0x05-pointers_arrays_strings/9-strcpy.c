#include "holberton.h"

/**
 * *strcpy - copies a string to buffer dest
 * @str: string location
 * @dest: buffer location
 *return: *dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}
