#include "holberton.h"
/**
 * reverse_array - reverses the content of an array of integers.
 * @a: array to be compared.
 * @n: size of array.
 * Return: reversed array.
 */
void reverse_array(int *a, int n)
{
	int temp, i;

	n = n - 1;
	i = 0;
	while (i <= n)
	{
		temp = a[i];
		a[i++] = a[n];
		a[n--] = temp;
	}
}
