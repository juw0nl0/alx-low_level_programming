#include "main.h"

/**
 * _strlen - a function that count the number of
 * character in a pointer to a string array
 *
 * $s: is the varable that hold the character
 * return: zero or the lenth of the character
 */
int _strlen(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return 1 + _strlen(s + 1);
	}
}
