#include "main.h"

/**
 * print_triangle - prints triangle
 * @size: input for triangle size
 */
void print_triangle(int size)
{
	int row, column, a;

	if (size <= 0)
		_putchar('\n');
	for (row = 0; row < size; row++)
	{
		for (column = size - row; column > 1; column--)
			_putchar(' ');
		for (a = row + column; a >= 1; a--)
			_putchar('#');
		_putchar('\n');
	}
}
