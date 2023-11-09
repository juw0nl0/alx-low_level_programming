#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - function thats prints a name
 * @name: char to display
 * @f: A pointer function
 * Return: Nothing
*/
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;

	f(name);
}
