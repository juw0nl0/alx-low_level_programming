#include "main.h"
#include <stdio.h>

/**
* print_diagsums - a function that prints the sum of the
* two diagonals of a square matrix of integers.
* @a: matrix
* @size: size of matrix
*/
void print_diagsums(int *a, int size)
{
	int primary_diag_sum = 0;
	int secondary_diag_sum = 0;
	int row, i;

	for (row = 0; row < size; row++)
	{
		i = (row * size) + row;
		primary_diag_sum += a[i];
	}

	for (row = 1; row <= size; row++)
	{
		i = (row * size) - row;
		secondary_diag_sum += a[i];
	}

	printf("%d, %d\n", primary_diag_sum, secondary_diag_sum);
	printf("Primary diagonal sum: %d\n", primary_diag_sum);
	printf("Secondary diagonal sum: %d\n", secondary_diag_sum);
}
