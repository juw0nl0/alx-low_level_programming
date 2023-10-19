#include "main.h"

/**
  *_strcat - a function that concatenates two strings
  *
  *@dest: a first pointer parater to the function
  *@src: a second  pointer parater to the function
  *Return: a concantenated string
 */
char *_strcat(char *dest, char *src)
{
	char *final_dest = dest;

	while(*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest ++;
		src++;
	}
	dest = ('\0');
	return(final_dest);
}
