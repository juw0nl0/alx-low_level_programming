#include "main.h"
#include <string.h>

/**
 * palindrome_check_recursion - checks the string
 * @s: the string to be checked
 * @start: the length of the string
 * @end: the incrementor, starts at 0
 * Return: 1 if it's a palindrome, 0 if it's not
 */
int palindrome_check_recursion(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}
	if (s[start] != s[end])
	{
		return (0);
	}
	return (palindrome_check_recursion(s, start + 1, end - 1));
}
/**
 * _strlen_recursion - returns the length of a string
 * @s: the string to check the length of
 * Return: an integer that displays the length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));
	return (0);
}
/**
 * is_palindrome - checks to see if a string is a palindrome
 * @s: the string to check
 * Return: 1 if it's a palindrome, 2 if it's not
 */
int is_palindrome(char *s)
{
	int i = 0;
	int length = _strlen_recursion(s) - 1;

	return (palindrome_check_recursion(s, length, i));
}
