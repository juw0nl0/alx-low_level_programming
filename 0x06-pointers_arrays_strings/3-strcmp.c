#include "main.h"

/**
  *_strcmp - a function that compare two strings
  *
  *@s1: a first pointer parater to the function
  *@s2: a second  pointer parater to the function
  *
  *Return: an interget depending on the comparison
 */
int _strcmp(char *s1, char *s2)
{
	while ((*s1 != '\0' && *s2 != '\0') && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	if (*s1 == *s2)
	{
		return (0);
	}
	else
	{
	return (*s1 - *s2);
	}
}
