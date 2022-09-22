#include "main.h"
#include <stdlib.h>

/**
 * reverse_array - reverses the content of an array of integers.
 * @a: pointer to an array of integer
 * @n: size of a
 */
void reverse_array(int *a, int n)
{
	int *tmp = (int *)malloc(n * sizeof(int));
	int q, r;

	for (q = 0; q < n; q++)
		tmp[q] = a[q];
	for (q = n - 1, r = 0; q >= 0; q--, r++)
		a[r] = tmp[q];
}
