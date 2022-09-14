#include "main.h"

/**
 * print_alphabet_x10 - the function will print the alphabets 10 times.
 *
 * Return: Nothing.
 */
void print_alphabet_x10(void)
{
	int round, ch;

	for (round = 0; round <= 9; ++round)
	{
		for (ch = 'a'; ch <= 'z'; ++ch)
		{
			_putchar(ch);
		}
		_putchar('\n');
	}
}
