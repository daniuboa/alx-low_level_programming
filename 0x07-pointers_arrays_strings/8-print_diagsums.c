#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Function that prints sum of the two diagonals
 * 
 * @a: Pointer to array of characters.
 * @size: size of array.
 *
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i, max_size;
	int printDiagonalSum = 0;
	int secDiagonalSum = 0;

	max_size = size * size;

	for (i = 0; i < max_size; i += size + 1)
		printDiagonalSum += a[i];

	for (i = size -1; i < max_size - 1; i += size -1)
		secDiagonalSum += a[i];

	printf("%d, %d\n", printDiagonalSum, secDiagonalSum);
}
