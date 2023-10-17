#include "main.h"
#include <string.h>

/**
 *puts_half - function that prints half of a string,
 *followed by a new line
 *
 *@str: input to the function
 *
 */
void puts_half(char *str)
{
	int len = strlen(str);
	char *start;

	if (len % 2 == 0)
	{
		start = str + len / 2;
	}
	else
	{
		start = str + (len - 1) / 2;
	}
	while (*start != '\0')
	{
		_putchar(*start);
		start++;
	}
	_putchar('\n');
}
