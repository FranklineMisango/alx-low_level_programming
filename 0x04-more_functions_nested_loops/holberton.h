#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>

/*Checks if a character is uppercase*/
int _isupper(int c);

/*check if a number is a digit*/
int _isdigit(int c);

/*Checks if a character is a digit*/
int mul(int a, int b);

/*Print all digits*/
void print_numbers(void);

/*Print all digits without 2 and 4*/
void print_most_numbers(void);

/*print 0-14 ten times*/
void more_numbers(void);

/*Draws a straight line*/
void print_line(int n);

/*Draws a diagonal line on the terminal*/
void print_diagonal(int n);

/*Prints a square then a new line*/
void print_square(int size);

/*Prints a triangle followed by a new line*/
void print_triangle(int size);

/*To print anything*/
int _putchar(char x);

#endif
