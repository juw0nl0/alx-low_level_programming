#include "main.h"

/**
 * void swap_int - a function that sway the value of two pointers
 * 
 * @a: entry parameter for swap function
 * @b: entry parameter for swap function
 *
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
