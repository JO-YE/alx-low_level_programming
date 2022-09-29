#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: input pointer to 2D array.
 * @size: which diagonal to add.
 */
void print_diagsums(int *a, int size)
{
	int i, sumj, sumk;

	sumj = sumk = 0;
	for (i = 0; i < (size * size); i += size + 1)
		sumj += a[i];
	for (i = size - 1; i < (size * size - 1); i += size - 1)
		sumk += a[i];
	printf("%d, %d\n", sumj, sumk);
}
