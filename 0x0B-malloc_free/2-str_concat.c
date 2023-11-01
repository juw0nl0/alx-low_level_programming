#include "main.h"
#include <stdlib.h>

/**
 *_strlen - count arrray
 *@str: array of elements
 *Return: i
 */

int _strlen(char *str)
{
	unsigned int lenght;

	lenght = 0;
	while (str[lenght] != '\0')
	{
		lenght++;
	}
	return (lenght);
}

/**
 * str_concat - concatenates two strings
 * @s1: string1
 * @s2: string2
 * Return: Null of s1
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i, j, size;
	char *final;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	size = _strlen(s1) + _strlen(s2) + 1;
	final = (char *)malloc(size * sizeof(char));

	if (final == NULL)
	{
		return (NULL);
	}

	for (i = 0; s1[i] != '\0'; i++)
	{
		final[i] = s1[i];
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		final[j] = s2[j];
		i++;
	}
	final[i] = '\0';
	return (final);
}
