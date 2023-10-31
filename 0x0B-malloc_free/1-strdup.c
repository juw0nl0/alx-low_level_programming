#include "main.h"
#include <stdlib.h>

/**
  * _strdup - function that returns a pointer to a newly
  * allocated space in memory.
  * @str: a pointer to the string to duplicate.
  * Returnss: returns a pointer to the duplicated string
  */
char *_strdup(char *str)
{
	char *p;
	unsigned int i, j;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
		;
	i++;
	if (i < 1)
		return (NULL);
	p = malloc(sizeof(char) * i);
	if (p == NULL)
	{
		free(p);
		return (NULL);
	}
	for (j = 0; j < i; j++)
		p[j] = str[j];
	p[j] = '\0';

	return (p);
}
