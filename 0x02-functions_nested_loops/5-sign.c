#include "main.h"
#include <stdio.h>

/**
 * print_sign - return 0 letter not 
 * lowercase, 1 letter lowercase
 *
 * @n : number to check
*/
int print_sign(int n)
{
	if (n < 0)
	{
		printf ("-1\n");
	}
	else if (n == 0)
	{
		printf ("0\n");
	}
	else
	{
		printf ("+1\n");
	}
}
