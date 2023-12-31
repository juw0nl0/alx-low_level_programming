#include "main.h"
#define NULL 0

/**
* _strchr - this function locates a character in a string.
* @s: string to search
* @c: target characer
* Return: a pointer to the first occurrence of the character
* c in the string s, or NULL if the character is not found
*/

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0' && s[i] != c)
		i++;

	if (s[i] == c)
		return (&s[i]);

	else
		return (NULL);
}
