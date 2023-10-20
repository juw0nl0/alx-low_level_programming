#include "main.h"
#include <ctype.h>
#include <stdlib.h>

/**
 * cap_string - Write a function that capitalizes all words of a string.
 *
 * @entry: This is the input string
 *
 * Return: String capitalized
 */
char* cap_string(char* str)
{
	char* result = (char*)malloc(strlen(str) + 1);
	if (result == NULL)
	{
        	return NULL; // Memory allocation failed
	}
	int result_index = 0;
	int length = strlen(str);
	bool capitalize = true;

	for (int i = 0; i < length; i++)
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
		str[i] == ',' || str[i] == ';' || str[i] == '.' ||
		str[i] == '!' || str[i] == '?' || str[i] == '"' ||
		str[i] == '(' || str[i] == ')' || str[i] == '{' ||
		str[i] == '}')
		{
			result[result_index++] = str[i];
			capitalize = true;
		}
		else if (capitalize)
		{
			result[result_index++] = toupper(str[i]);
			capitalize = false;
		}
		else
		{
			result[result_index++] = tolower(str[i]);
		}
	}
	result[result_index] = '\0'
	return (result);
}
