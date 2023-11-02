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
 * string_nconcat - function that concatenates two strings
 * @s1: string1
 * @s2: string2
 * @n: number of characters to be copied from the second string
 * Return: a pointer to the newly allocated space in memory.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len_s1 = _strlen(s1);
	unsigned int len_s2 = _strlen(s2);
	unsigned int i;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	if (n >= len_s2)
	{
		n = len_s2;
	}
	char *result = (char *)malloc(len_s1 + n + 1);

	if (*result == NULL)
	{
		return (NULL);
	}
	char *ptr = result;

	while (*s1 != '\0')
	{
		*ptr = *s1;
		ptr++;
		s1++;
	}
	for (i = 0; i < n; i++)
	{
		if (*s2 == '\0')
		{
			break;
		}
		*ptr = *s2;
		ptr++;
		s2++;
	}
	*ptr = '\0';
	return (result);
}
