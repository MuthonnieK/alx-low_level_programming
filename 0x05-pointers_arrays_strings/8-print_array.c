#include "main.h"

/**
 * print_array - prints array elements
 * @a: pointer
 * @n: number of elements
 */
void print_array(int *a, int n)
{
	int x = 0;

	for (n--; n >= 0; x++)
		printf("%d, ", a[x]);
	printf("\n");
}
