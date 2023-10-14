#include "main.h"

/**
 * print_diagonal - print slash
 * @n: params
*/
void print_diagonal(int n)
{
	int x = 0;
	int y;

	if (n > 0)
	{
		for (; x < n; i++)
		{
			for (y = 0; y < x; y++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
