#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a: pointer
 * @size: the size of array
 */
void print_diagsums(int *a, int size)
{
	int m, sum = 0, sumTrailDiag = 0;

	for (m = 0; m < size * size; m++)
	{
		if ((m % (size + 1) == 0) && (m % (size - 1) == 0)
				&& m && m < size * size - 2)
		{
			sum += a[m];
			sumTrailDiag += a[m];
		}
		else if (m % (size + 1) == 0)
			sum += a[m];
		else if (m % (size - 1) == 0 && m && m < size * size - 2)
			sumTrailDiag += a[m];
	}
	printf("%d, %d", sum, sumTrailDiag);
	putchar('\n');
}
