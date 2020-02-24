#include <stdio.h>

/**
 * print_diagsums - print the sum of two diagonals
 * of a square matrix of integers
 * @a: input
 * @size: input
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i, j, sumL = 0, sumR = 0;

	for (i = 0, j = size - 1; i < size * size;
	     i += (size + 1), j += size - 1)
	{
		sumL += a[i];
		sumR += a[j];
	}

	printf("%d, %d\n", sumL, sumR);
}
