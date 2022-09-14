#include "main.h"
/**
 * print_times_table - prints the times table for n.
 * @n: multiplication table requested.
 */
void print_times_table(int n)
{
	int a, b, result;

	if (!(n > 15 || n < 0))
	{
		for (a = 0; a <= n; a++)
		{
			for (b = 0; b <= n; b++)
			{
				result = (a * b);
				if (b != 0)
				{
					_putchar(',');
					_putchar(' ');
				}
				if (result < 10 && b != 0)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar((result % 10) + '0');
				}
				else if (result >= 10 && result < 100)
				{
					_putchar(' ');
					_putchar((result / 10) + '0');
					_putchar((result % 10) + '0');
				}
				else if (result >= 100 && b != 0)
				{
					_putchar((result / 100) + '0');
					_putchar((result / 10) % 10 + '0');
					_putchar((result % 10) + '0');
				}
				else
					_putchar((result % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
