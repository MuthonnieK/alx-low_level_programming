#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y.
 * @x: value raised by
 * @y: value raised to
 * Return: -1 if y is < 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 1)
		return (x);
	else if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
