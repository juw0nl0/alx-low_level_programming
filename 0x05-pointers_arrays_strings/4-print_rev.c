#include <stdio.h>
#include "main.h"

/**
 * print_rev - a function that prints a string in reverse, followed by a new line
 *
 * @s: the input string of the function
 *
 * _putchar: print strings to std out
 *
 */
void print_rev(char *s)
{
	while (*s != '\0')
        {
                _putchar(*s);
                s--;
        }
        _putchar('\n');
}
