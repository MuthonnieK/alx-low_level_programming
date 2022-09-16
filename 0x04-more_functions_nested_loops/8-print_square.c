#include "main.h"

/**
 * print_square - prints square
 * @size: the square dimensions
 */
void print_square(int size)
{
	int a, b;

	for (b = 0; b < size; b++)
	{
		for (a = 0; a < size; a++)
			_putchar('#');
		_putchar('\n');
	}
	if (size < 1)
		_putchar('\n');
}
