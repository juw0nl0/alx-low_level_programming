#include "main.h"

/**
 * swap_int - function that sway the value of two pointers
 *
 * @a: first pointer entry
 * @b: second pointer entry
 *
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
