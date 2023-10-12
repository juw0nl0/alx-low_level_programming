#include "main.h"
#include <stdio.h>

/**
 * print_sign - checks if a character is positive,
 * negative or zero.
 * if positive it returns 1
 * els if zero it returns 0, 
 * else it return negative -1,
 *
 * parameter n: is an interger
 * Return: if YES it returns 1, if zero it returns 0,
 * else it return -1.
*/
int print_sign(int n)
{
	if (n < 0)
	{
		printf ("-1\n");
		return (-1);
	}
	else if (n == 0)
	{
		printf ("0\n");
		return (0);
	}
	else
	{
		printf ("+1\n");
		return (1);
	}
}
