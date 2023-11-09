#include "function_pointers.h"

/**
  * print_name - function that prints a name
  * @name: a pointer to a charater data type
  * @f:  a pointer funtion that point to a character and return nothing
  * Return: nothing
  */
void print_name(char *name, void (*f)(char *))
{
	if (!f || !name)
	{
		return;
		f(name);
	}
}
