#include "main.h"
#include <stdio.h>

/**
 * _puts - a function that prints a string, followed by a new line
 *
 * @str: the input string of the function
 *
 * _putchar: print strings to std out
 *
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
