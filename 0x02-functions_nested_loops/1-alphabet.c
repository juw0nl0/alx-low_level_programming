#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
*/
void print_alphabet(void)
{
	char alp = 'a';

	while(alp <= 'z')
	{
		_putchar(alp);
		alp++;
	}
	_putchar('\n');
}

int main(void)
{
	print_alphabet();
	return(0);
}
