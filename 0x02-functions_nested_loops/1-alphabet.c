#include "main.h"

/**
 * print_alphabet - print to stdio
 *
 * Return: list of alphabet.
*/
void print_alphabet(void)
{
	char alp = 'a';

	while (alp <= 'z')
	{
		_putchar(alp);
		alp++;
	}
	_putchar('\n');
}
