#include "main.h"

void print_number(unsigned int n);

/**
 * print_number - prints number
 * @var: variable to be printed
 * Created by: Sanctus-Peter
 * cc: 7th july, 2022
 */
void print_number(int var)
{
	if (var < 0)
	{
		_putchar('-');
		var = -var;
	}
	print(var);
}

/**
 * print_number - subfunction to print recursively
 * @n: the variable to be printed
 */
void print_number(unsigned int n)
{
	if (n / 10)
		print(n / 10);
	_putchar('0' + n % 10);
}
