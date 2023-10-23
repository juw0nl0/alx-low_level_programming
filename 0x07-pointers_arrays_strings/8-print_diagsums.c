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
	// Sum of the primary diagonal
	int primary_diag_sum = 0;
	// Sum of the secondary diagonal
	int secondary_diag_sum = 0;

	for (int i = 0; i < size; i++)
	{
		// Elements on the primary diagonal
		primary_diag_sum += a[i * size + i];
		// Elements on the secondary diagonal
		secondary_diag_sum += a[i * size + (size - 1 - i)];
	}
	printf("Primary diagonal sum: %d\n", primary_diag_sum);
	printf("Secondary diagonal sum: %d\n", secondary_diag_sum);
}
