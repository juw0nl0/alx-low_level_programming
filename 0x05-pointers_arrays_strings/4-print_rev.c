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
	int len;
	int i;

	while (s[len] != '\0')
	{
		len++;
	}

	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
