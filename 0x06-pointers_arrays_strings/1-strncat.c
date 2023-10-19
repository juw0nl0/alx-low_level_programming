#include "main.h"

/**
  *_strncat - a function that concatenates two strings
  *
  *@dest: a first pointer parater to the function
  *@src: a second  pointer parater to the function
  *@n: nth characte from src input
  *Return: a concantenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	*final_dest = dest;

	while (*dest != '\0')
	{
		final_dest++;
	}
	while (*src != '\0' && n > 0)
	{
		*fianl_dest = *src;
		final_dest++;
		src++;
		n--;
	}
	final_dest = '\0';
	return (dest);
}
