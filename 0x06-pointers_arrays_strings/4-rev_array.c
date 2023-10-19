#include "holberton.h"
/**
 * reverse_array - reverses the content of an array of integers.
 * @a: array to be compared.
 * @n: size of array.
 * Return: reversed array.
 */
void reverse_array(int *a, int n)
{
	int start = 0;
	int end = n - 1;

	while (start < end)
	{
		a[start] ^= a[end];
		a[end] ^= a[start];
		a[start] ^= a[end];
		start++;
		end--;
	}
}
