#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Print the sum of two diagonals of square matrix
 * @a: the matrix
 * @size: the size
 *
 * Return: Nothing.
 */

void print_diagsums(int *a, int size)
{
	int i, j, sum1 = 0, sum2 = 0;

	for (j = 0, i = size - 1; j < (size * size); j += size + 1, i += size - 1)
		sum1 += a[j], sum2 += a[i];

	printf("%d, %d\n", sum1, sum2);
}
