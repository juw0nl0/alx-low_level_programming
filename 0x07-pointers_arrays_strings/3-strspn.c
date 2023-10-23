#include "main.h"

/**
* _strspn - function that gets the length of a prefix substring.
* @s: string to search
* @accept: target matches
* Return: the number of bytes in the initial segment of
* s which consist only of bytes from accept
*/

unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j;
	int matches = 0;

	/*iterate through string*/
	while (s[i] != '\0')
	{
		/*iterate through target*/
		for (j = 0; accept[j] != '\0'; j++)
		{
			/*record & break at first match*/
			if (s[i] == accept[j])
			{
				matches++;
				break;
			}

			if (accept[j + 1] == '\0' && s[i] != accept[j])
			/*return if idx doesn't match*/
			return (matches);
		}

		i++;
	}
	/*return num if all match till end */
	return (matches);

}
