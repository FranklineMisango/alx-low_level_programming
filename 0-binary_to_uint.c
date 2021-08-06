#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: binary number
 *
 * Return: 0 or converted number
 */

unsigned int binary_to_uint(const char *b)
{
unsigned int val = 0;
int i = 0;
int c;
unsigned int len;

  if (b == NULL)
    return 0;

len = strlen(b);

  for (c = len-1; c >= 0; c--)
 {
  if (b[c] != '0' && b[c] != '1')
      return (0);
 }
  while (b[i] == '0' || b[i] == '1')
  {  
    val <<= 1;
    val += b[i]-'0';
    i++;
  }
  return val;
}
