#include "main.h"
#define NULL 0

/**
* _strpbrk - a function that searches a string for any of a set of bytes.
* @s: string to search
* @accept: target matches
* Return: a pointer to the byte in s that matches one of the bytes in accept,
* or NULL if no such byte is found
*/

char *_strpbrk(char *s, char *accept)
{
	int x = 0, y;

	while (s[x] != '\0')
	{
		for (y = 0; accept[y] != '\0'; y++)
		{
			if (s[x] == accept[y])
			{
				s = &s[x];
				return (s);
			}

		}

	x++;
	}

	return (NULL);

}
