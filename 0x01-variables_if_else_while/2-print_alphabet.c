#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*More headers go here*/

/*Betty style doc for function main goes here*/
/**
* main - starts the code
* Description: prints the alphabet in lowercase, followed by a new line.
* Return: 0
*/

int main(void)
/*Your code goes here*/
  {
char ch = 'a';

while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}

















