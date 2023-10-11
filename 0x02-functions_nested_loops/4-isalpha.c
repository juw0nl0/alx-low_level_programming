#include "main.h"

/**
 * _isalpha - checks if a character is an alphabet
 * if YES it returns 1
 * otherwise returns 0 just like islower()
 * function in ctype.h
 * @c: Is the int value to be compared
 * with the ASCII value
 *
 * parameter c - is an alphabet
 * Return: if YES it returns 1 otherwise returns 0.
*/
int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
	{
		if (c >= 91 && c <= 96)
		{
			return (0);
		}
		return (1);
	}
	else
	{
		return (0);
	}
}
