#include "main.h"

/**
  * _strlen_recursion - A function that return the lenght of a string
  * @s: an input paranmeter to the function whichbia a pointer to the string
  *
  */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	else
	{
		return (1 + _strlen_recursion(1 + s));
	}
}
