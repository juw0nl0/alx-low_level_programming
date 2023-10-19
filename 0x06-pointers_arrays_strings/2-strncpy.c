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
	char *final_dest = dest;

	while (n > 0 && *src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	while (n > 0)
	{
		dest = '\0';
		dest++;
		n--;
	}
	return (final_dest);
}
