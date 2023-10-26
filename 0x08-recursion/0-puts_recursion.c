#include "main.h"

/**
* _put_recursion - a function that prints a string, followed by a new line.
* @s: string to search
* Return: a
* 
*/
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar (*s);
	_puts_recursion(s + 1);
}
