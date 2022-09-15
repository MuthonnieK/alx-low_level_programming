#include "main.h"

/**
 * print_line - draws a straight line in the terminal.
 *
 * @n: Integer used
 */

void print_line(int n)
{
	char x;

	for (x = 0; x < n; x++)
		_putchar('_');
	_putchar('\n');

}
