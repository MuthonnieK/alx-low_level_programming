#include "main.h"

int square(int, int);

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: number
 * Return: -1 if no natural square root
 */
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}

/**
 * square - find square root
 * @n: integer
 * @val: the square root
 * Return: integer
 */
int square(int n, int val)
{
	if (val * val == n)
		return (val);
	else if (val * val < n)
		return (square(n, val + 1));
	else
		return (-1);
}
