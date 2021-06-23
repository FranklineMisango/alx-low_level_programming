#include <stdio.h>
#include <unistd.h>

/**
 * main - starts the code
 * Description: prints a sentence
 * Return: 1
 */

int main(void)
{
char ch[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
write(2, ch, sizeof(ch));
 fprintf(stderr, RED "[ERROR]"
               NC  ": No string argument provided! \n"
                   "You must provide a program path as argument\n");
return (1);
}
