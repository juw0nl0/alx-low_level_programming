#include "main.h"

/**
 * print_numbers - prints number
 * Return: character
*/
void print_numbers(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}