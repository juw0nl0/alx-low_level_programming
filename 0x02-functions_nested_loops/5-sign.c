#include "main.h"

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
		return (1);
	}
	else if (n == 0)
	{
		return (0);
	}
	else
	{
		return (+1);
	}
}
