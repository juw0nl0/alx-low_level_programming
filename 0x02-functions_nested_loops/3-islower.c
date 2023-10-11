#include "main.h"
/**
 * _islower function - checks if a character (c) is lowercase or not. if YES it returns 1
 * otherwise returns 0.
 * parameter c - is an alphabet
 * Return - if YES it returns 1 otherwise returns 0.
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
