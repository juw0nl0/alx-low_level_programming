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
	int i;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] < s2[i])
		{
			return (-1);
		}
		else if (s1[i] > s2[i])
		{
			return (1);
		}
	}
	return (0);
}
