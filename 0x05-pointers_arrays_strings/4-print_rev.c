#include <stdio.h>
#include "main.h"

/**
 * print_rev - a function that prints a
 * string in reverse, followed by a new line
 *
 * @s: the input string of the function
 *
 * _putchar: print strings to std out
 *
 */
void print_rev(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	print_rev(s + 1);
	_putchar(*s);
}
