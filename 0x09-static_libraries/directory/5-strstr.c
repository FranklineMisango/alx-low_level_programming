#include "holberton.h"

/**
 * _strstr - locates a substring
 * @haystack: source string
 * @needle: second string
 * Return: pointer to the beginning of needle in haystack or null
 */

char *_strstr(char *haystack, char *needle)
{
int i, j, m;

for (i = 0; haystack[i] != '\0'; i++)
{
for (m = i, j = 0; needle[j] != '\0'; j++, m++)
{
if (needle[j] != haystack[m] || haystack[m] == '\0')
{
break;
}
}
if (needle[j] == '\0')
{
return (haystack + i);
}
}
return (0);
}
