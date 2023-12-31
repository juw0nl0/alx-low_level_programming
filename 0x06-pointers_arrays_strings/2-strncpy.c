#include "main.h"

/**
  *_strncpy - a function that concatenates two strings
  *
  *@dest: a first pointer parater to the function
  *@src: a second  pointer parater to the function
  *@n: nth characte from src input
  *Return: a concantenated string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
