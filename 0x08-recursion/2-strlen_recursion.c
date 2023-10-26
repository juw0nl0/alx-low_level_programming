#include "main.h"

/**
  * _strlen_recursion - A function that return the lenght of a string
  * @s: an input paranmeter to the function whichbia a pointer to the string
  * Return: the length of a string in byte
  */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(1 + s));
	}
}
