#include "main.h"

/**
 * print_sign - prints the sign of a number.
 * @n: input of function
 * Return: 1 and print + if n>0
 * 0 and print 0 if n=0
 * -1 and print - if n<0
 */
int print_sign(int n)
{
	for (n > 0)
	{
		return (1);
		_putchar ('+');
	}
	for (n < 0)
	{
		return (-1);
		_putchar ('-');
	}
	for (n = 0)
	{
		return (0);
		_putchar (0);
	}
}
