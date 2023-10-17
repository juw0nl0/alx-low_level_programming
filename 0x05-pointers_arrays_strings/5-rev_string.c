#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * rev_string - a function that reverses a string
 *
 * @s: input to the function which is a string
 *
 */
void rev_string(char *s)
{
	int len = strlen(s);
	int i, j;
	char temp;
	
	for (i = 0, j = len - 1; i < j; i++, j--)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
	}
}
